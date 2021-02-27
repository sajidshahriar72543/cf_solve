#include<bits/stdc++.h>

#define ll long long
#define lop(n) for(int i = 0; i < n; i++)
#define lop1(n) for(int i = 1; i <= n; i++)
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define inf 999999999999

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tt, n;
    set <int> S;

    cin >> tt;

    while(tt--)
    {
        cin >> n;

        lop(n)
        {
            int inp; cin >> inp;
            S.insert(inp);
        }

        cout << S.size() << '\n';
        S.clear();
    }


    return 0;
}


