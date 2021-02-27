#include<bits/stdc++.h>

#define ll long long
#define lop(n) for(int i = 0; i < n; i++)
#define lop1(n) for(int i = 1; i <= n; i++)
#define pb push_back

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tt, n, m;

    cin >> tt;

    while(tt--)
    {
        cin >> n >> m;

        if (n == 1)
            cout << 0 << '\n';
        else if(n == 2)
            cout << m << '\n';
        else
            cout << 2 * m << '\n';
    }



    return 0;
}

