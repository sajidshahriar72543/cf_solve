#include<bits/stdc++.h>

using namespace std;

#define ll unsigned long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

#define N 100005

ll a[N], n;
const ll NN = 1000000000000000;

ll f(ll x)
{
    ll ans = 0;
    ll pwr = 1;

    lop(0, n)
    {
        if(pwr > a[i])
            ans += pwr - a[i];
        else
            ans += a[i] - pwr;

        pwr *= x;

        if(pwr > NN)
            break;
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    lop(0, n) cin >> a[i];

    sort(a, a + n);

    ll ans = f(1), res;

    lop(2, N) {
        res = f(i);
        if(res > NN or res < 0) break;
        ans = min(ans, res);
        //cout << i << ' ' << ans << '\t';
    }

    cout << ans << '\n';

    return 0;
}
