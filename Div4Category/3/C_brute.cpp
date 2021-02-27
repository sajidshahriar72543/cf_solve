#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define deb(x)          cout << #x << "=" << x << endl
#define deb2(x, y)      cout << #x << "=" << x << " , " << #y << "=" << y << endl

const double eps = 1e-12;

void solve()
{
    ll n, m, w;
    scanf("%lld %lld", &n , &w);

    ll ar[2 * n];
    for (int i = 0 ; i < 2 * n ; i++) scanf("%lld", &ar[i]);

    sort(ar , ar + 2 * n);

    double lo = 0, hi = 1e9 , mid;

    //deb2(hi, lo);

    while (hi - lo >= eps)
    {
        mid = (hi + lo) / 2.0;
        //deb(mid);

        if (mid * n + (2 * mid)*n > w) hi = mid;
        else
        {
            bool ok = 1;
            for (int i = 0, j = n ; i < n && j < 2 * n ; i++, j++)
            {
                if ((ar[i] * 1.0) < mid || (ar[j] * 1.0) < 2 * mid)
                {
                    ok = 0;
                    break;
                }
            }

            if (!ok) hi = mid;
            else lo = mid;
        }
    }

    //deb2(hi , lo);

    printf("%0.10f\n", (n * 1.0) * (mid + 2 * mid));
}


int main()
{
    int t = 1;

    //scanf("%d",&t);

    while (t--)
    {
        solve();
    }

    return 0;
}