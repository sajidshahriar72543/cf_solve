#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ff              first
#define ss              second

struct mons
{
    ll h, d, tt;

    bool operator < (const mons &b) const
    {
        return tt < b.tt;
    }
};

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
    ll A, B, n;

    cin >> A >> B >> n;

    ll a[n], b[n], c[n];
    iota(c, c + n, 0);

    lop(n) cin >> a[i];
    lop(n) cin >> b[i];

    do
    {
        ll lB = B, kil = 0;
        bool f = 1;

        lop(n)
        {
            ll x = (b[c[i]] + A - 1) / A;
            lB -= x * a[c[i]];
            kil++;

            if (lB <= 0)
            {
                if (kil == n and lB > -a[c[i]])
                {
                    yes;
                    return;
                }
                else
                {
                    // cout << kil << ' ' << B << ' ' << a[i] << '\n';
                    f = 0;
                }
            }
        }

        if (f)
        {
            yes;
            return;
        }
    }
    while (next_permutation(c, c + n));

    no;
    return;
}