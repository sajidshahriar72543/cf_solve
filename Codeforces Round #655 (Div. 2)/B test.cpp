#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll m = n, ans;

    for(ll i = 1; i <= (n / 2) + 1; i++)
    {
        ll xx = __gcd(i, n - i);
        xx = (i * (n - i)) / xx;

        if(xx < m) {
            ans = i;
            m = xx;
        }
    }

    cout << ans << " " << n - ans << '\n';
    main();
}
