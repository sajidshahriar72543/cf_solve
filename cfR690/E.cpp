#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

ll ncr(ll n, ll r)
{
    if (r > n)
        return 0;

    if (r > n - r)
        r = n - r;
    ll ans = 1;
    ll i;

    for (i = 1; i <= r; i++)
    {
        ans *= n - r + i;
        ans /= i;
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
    int n;
    cin >> n;
    int a, c[n + 20] = {0};

    lop(n)
    {
        cin >> a;
        c[a]++;
    }

    // lop(n + 1) cout << c[i] << ' ';
    // cout << endl;

    ll ans = 0;
    lop(n + 1)
    {
        if (!c[i]) continue;

        ll x = c[i] + c[i + 1] + c[i + 2];
        if (x > 2)
        {
            ll p = ncr(x, 3);
            // cout << i << ' ' << x << ' ' << p << '\t';

            ll xx = c[i + 1] + c[i + 2] + c[i + 3];
            if (xx > 2) {
                p -= ncr(c[i + 1] + c[i + 2], 3);
            }
            // cout << xx << ' ' << p << '\t';
            if (xx <= 2) {
                xx = c[i + 2] + c[i + 3] + c[i + 4];
                if (xx > 2) {
                    p -= ncr(c[i + 2], 3);
                }
            }
            // cout << xx << ' ' << p << '\n';

            ans += p;
        }
    }

    cout << ans << '\n';
    return;
}