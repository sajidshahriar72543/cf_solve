#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

void solve();

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int test = 1;

    cin >> test;

    while (test--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll a[n], ans = 0;
    lop(n) cin >> a[i];

    ll s = a[0];
    loop(i, 1, n)
    {
        if (a[i] * 100 <= s * k)
        {
            s += a[i];
            continue;
        }

        // cout << ans << '\n';

        /*ll lo = 1, hi = 1e16, m, x = hi;
        while (hi - lo > 1)
        {
            m = (lo + hi) / 2;

            // double d = ((double) a[i] / (s + m)) * 100.0;
            // cout << d << ' ' << k << '\n';
            if (a[i] * 100 > (s + m) * k)
                lo = m;//, cout << m << ' ';
            else
            {
                // cout << m << ' ';
                hi = m;
                x = min(x, m);
            }
        }*/

        ll x = (a[i] * 100) - (s * k);
        x /= k;
        if (a[i] * 100 > (s + x) * k)
            x++;
        ans += x;
        // cout << lo << '\n';
        s += a[i] + x;
    }

    cout << ans << '\n';

    return;
}