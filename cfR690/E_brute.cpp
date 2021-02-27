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
    int a[n];

    lop(n)
    {
        cin >> a[i];
    }

    // lop(n + 1) cout << c[i] << ' ';
    // cout << endl;

    ll ans = 0;
    lop(n)
    {
        loop(j, i + 1, n)
        {
            loop(k, j + 1, n)
            if (max({a[i], a[j], a[k]}) - min({a[i], a[j], a[k]}) <= 2)
                ans++;
        }
    }

    cout << ans << '\n';
    return;
}