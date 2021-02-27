#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

ll cnt(ll x, ll y)
{
    if (y == 1)
        return 1 << 30;
    ll s = 0;
    while (x)
    {
        s++;
        x /= y;
    }
    return s;
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
    ll a, b;
    cin >> a >> b;

    if (a < b) {
        cout << 1 << '\n';
        return;
    }
    if (a == b) {
        cout << 2 << '\n';
        return;
    }

    ll ans = 0, q = b;
    if (b == 1)
        b++, ans++;

    ll p = cnt(a, b);
    ans += p;
    if (q != b)
        b--;

    while (q <= b + p + 2)
    {
        ans = min(ans, cnt(a, q) + q - b);
        q++;
    }

    cout << ans << '\n';
    return;
}