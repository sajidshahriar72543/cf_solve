
/**Hey, What's up?*/

#include<bits/stdc++.h>
#pragma GCC optimize("O3,no-stack-protector,unroll-loops,fast-math")
using namespace std;
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
long long BigMod(long long B, long long P, long long M)
{
    long long R = 1;
    while (P > 0)
    {
        if (P % 2 == 1)
        {
            R = (R * B) % M;
        }
        P /= 2LL;
        B = (B * B) % M;
    }
    return R;
}
long long fact[2000005];
long long ncr(long long n, long long r, long long mod)
{
    if (fact[0] == 0)
    {
        fact[0] = 1;
        for (int i = 1; i < 2000003; i++)
        {
            fact[i] = fact[i - 1] * i;
            fact[i] %= mod;
        }
    }
    if (r > n)return 0;
    long long ret = fact[n];
    ret *= BigMod(fact[r], mod - 2, mod);
    ret %= mod;
    ret *= BigMod(fact[n - r], mod - 2, mod);
    ret %= mod;
    return ret;
}
vector<long long>v;
int main()
{
    fastio;
    long long a = 0, b = 0, c, d, e, f = 0, l, g, m, n, k, i, j, t, p, q;
    cin >> t;
    while (t--)
    {
        v.clear();
        cin >> n >> m >> k;
        for (i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        f = 0;
        for (i = 0; i < n; i++) {
            d = (upper_bound(v.begin(), v.end(), v[i] + k) - v.begin()) - i;
            f += ncr(d - 1, m - 1, 1000000007);
            f %= 1000000007;
        }
        cout << f << '\n';
    }
    return 0;
}
