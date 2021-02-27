#include<bits/stdc++.h>

#define ll long long

using namespace std;

ll LargestPower2(ll x)
{
    ll i;

    for(i = 1; i <= x / 2; i *= 2)
    {
        x = x | (x >> i);
    }

    return (x + 1) / 2;
}

ll f(ll l, ll r)
{
    if(l == r)
        return l;

    ll ans = LargestPower2(r);
    if(ans <= l)
    {
        l = l - ans;
        r = r - ans;

        return f(l, r) + ans;
    }

    ll ans2 = ans * 2;

    if(ans2 - 1 <= r)
        return ans2 - 1;

    return ans - 1;
}

int main()
{
    ll n, l, r;

    cin >> n;

    while(n--)
    {
        cin >> l >> r;

        cout << f(l, r) << endl;
    }

    return 0;
}
