#include<bits/stdc++.h>

#define ll long long
#define lop(n) for(int i = 0; i < n; i++)
#define lop1(n) for(int i = 1; i <= n; i++)
#define all(x) x.begin(), x.end()

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tt, n;

    cin >> tt;

    while(tt--)
    {
        cin >> n;
        int ar[n + 1];

        lop1(n) cin >> ar[i];

        sort(ar + 1, ar + n + 1);

        int c = 0;

        lop1(n)
        {
            if(ar[i] <= i)
                c = i;

           // cout << i << " " << ar[i] << '\n';
        }

        cout << c + 1 << '\n';
    }

    return 0;
}


