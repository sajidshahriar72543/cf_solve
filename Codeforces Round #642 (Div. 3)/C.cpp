#include<bits/stdc++.h>

#define ll long long
#define lop(n) for(int i = 0; i < n; i++)
#define lop1(n) for(int i = 1; i <= n; i++)
#define lopj(n) for(int j = i; j < n; j++)
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define all(x) x.begin(), x.end()
#define mod 1000000007
const long long inf = 999999999999;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tt, n;

    cin >> tt;

    while(tt--)
    {
        cin >> n;

        if(n < 3) {
            cout << 0 << '\n';
            continue;
        }

        ll x = 0, p = 1;

        for(ll i = 8; p <= n / 2; i += 8, p++)
            x += (i  * p);

        cout << x << '\n';
    }



    return 0;
}

