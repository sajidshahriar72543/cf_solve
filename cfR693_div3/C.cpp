#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

const int N = 2e5 + 6;
ll dp[N], a[N], n;

ll f(ll p)
{
    if (p >= n) return 0;
    if (dp[p] != -1) return dp[p];

    return dp[p] = a[p] + f(p + a[p]);
}

void solve();

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x, test;

    cin >> test;

    while (test--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    cin >> n;
    lop(n) cin >> a[i];

    lop(n + 3) dp[i] = -1;

    ll ans = 0;
    lop(n) ans = max(ans, f(i));

    cout << ans << '\n';

    return;
}