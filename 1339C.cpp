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
    int n;
    cin >> n;

    ll a[n];
    lop(n) cin >> a[i];

    ll mx, m;
    mx = m = -1e18;
    loop(i, 1, n)
    {
        m = max(m, a[i - 1]);
        mx = max(mx, m - a[i]);
        // cout << m << ' ' << a[i] << ' ' << m - a[i] << '\n';
    }

    // if (mx <= 0)
    // {
    //     cout << 0 << '\n';
    //     return ;
    // }

    // cout << mx << ' ';
    ll p = 1, ans = 0, q = 0;
    while (q < mx)
    {
        ans++;
        q += p;
        p *= 2;
    }

    cout << ans << '\n';

    return;
}