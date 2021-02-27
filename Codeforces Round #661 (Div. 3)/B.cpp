#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define __ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{__

    ll x, test, n, k;
    string s;

    cin >> test;

    while(test--)
    {
        cin >> n;

        ll a[n], b[n];
        ll ma, mb;
        ma = mb = 999999999999;

        lop(0, n) cin >> a[i], ma = min(ma, a[i]);
        lop(0, n) cin >> b[i], mb = min(mb, b[i]);

        ll res = 0;

        lop(0, n)
        {
            x = a[i] - ma, k = b[i] - mb;

            res += max(x, k);
        }




       cout << res << '\n';
    }

    return 0;
}


