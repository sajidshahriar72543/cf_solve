#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
const ll mod = 998244353;

int main()
{
    ll n, k;

    cin >> n >> k;

    ll p[n], s = 1, c = 0, ss = 0;

    lop(0, n) cin >> p[i];

    lop(0, n)
    {
        if (p[i] > n - k)
        {
            if (!c) c++;
            else s *= c, c = 1;
            s %= mod;
            ss += p[i];
        }
        else if (c)
            c++;
    }

    cout << ss << ' ' << s << endl;

    return 0;
}
