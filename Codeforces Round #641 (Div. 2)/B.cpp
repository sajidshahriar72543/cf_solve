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

    ll tt, n;
    vector <ll> v, x;

    cin >> tt;

    while(tt--)
    {
        cin >> n;

        v.pb(0);

        lop(n) {
            ll inp; cin >> inp;
            v.pb(inp);
        }

        for(ll i = n; i > 0; i--)
        {
            ll c = 1;

            for(ll j = i / 2; j <= n; j *= 2) {
              //  if(v[j])
            }
        }

        cout << '\n';
    }



    return 0;
}
