#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

ll sum(ll n)
{
    return (n * (n - 1)) / 2;
}

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
    ll x, y;
    cin >> x >> y;

    if (y >= x)
        y = x - 1;

    ll s = sqrt(x);
    ll ans = sum(min(y, s));
    ll pre = s;
    // cout << ans << "started\n";

    for (ll i = s; i and pre < y; i--)
    {
        ll z = (x / i) - 1;
        if (z <= pre) continue;
        ans += (min(y, z) - pre) * i;
        // cout << ans << ' ' << min(z, y) - pre << '\n';
        pre = z;
    }

    // for (int i = 2; i <= y; i++)
    // {
    //     int ans = 0;
    //     if (x / i >= i) ans = i - 1;
    //     else if (x % i >= x / i) ans = x / i;
    //     else ans = (x / i) - 1;

    //     cout << i << ' ' <<  ans << '\n';
    // }

    cout << ans << '\n';

    return;
}