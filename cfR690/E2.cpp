#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

const ll mod = 1e9 + 7, N = 2e5 + 20;
ll c[N], sm[N];

ll inv[105];
void imod()
{
    inv[1] = 1;
    for (ll i = 2; i < 105; i++)
    {
        ll z = ((mod / i) * inv[mod % i]) % mod;
        z = (mod - z) % mod;
        inv[i] = z;
    }
}

ll ncr(ll n, ll r)
{
    if (r > n)
        return 0;

    if (r > n - r)
        r = n - r;

    ll ans = 1;
    for (ll i = 1; i <= r; i++)
    {
        ans = (ans * (n - r + i)) % mod;
        ans = (ans * inv[i]) % mod;
    }

    return ans;
}

void solve();

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int test;
    imod();

    cin >> test;

    while (test--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll a;

    lop(n + 5) c[i] = 0;

    lop(n)
    {
        cin >> a;
        c[a]++;
    }

    loop(i, 1, n + 3)
    sm[i] = sm[i - 1] + c[i];

    ll ans = 0;
    for (ll i = 1; i + k <= n + 1; i++)
    {
        ll x = sm[i + k] - sm[i - 1];
        ll p = ncr(x, m);

        if (i + k <= n)
        {
            ll xx = x - c[i];
            p -= ncr(xx, m);
            if (p < 0) p += mod;
        }

        ans = (ans + p) % mod;
    }

    cout << ans << '\n';
    return;
}