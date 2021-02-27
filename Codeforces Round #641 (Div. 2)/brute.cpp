#include<bits/stdc++.h>

#define ll long long

using namespace std;

ll _gcd(ll a, ll b)
{
    if (b == 0LL)
        return a;
    return _gcd(b, a % b);
}

int main()
{
    ll a, b, n;

    scanf("%lld", &n);

    vector <ll> ar(n);
    for (auto &z : ar) cin >> z;

    if (n == 1) {
        cout << ar[0] << '\n';
        return 0;
    }

    if (n == 1) {
        cout << ar[0] << '\n';
        return 0;
    }
    if (n == 2)
    {
        cout << lcm(ar[0], ar[1]) << '\n';
        return 0;
    }

    bool f = 0;
    ll gcd, x, y;
    //vector <ll> LCM;

    for (ll i = 0; i < n - 1; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            ll Lcm = lcm(ar[i], ar[j]);// / __gcd(ar[i], ar[j]);
            //LCM.push_back(lcm(ar[i], ar[j]));

            if (i == 0 && j == 1)
                gcd = Lcm;
            // else if (i == 0 && j == 2)
            //     gcd = __gcd(x, Lcm);
            else
                gcd = __gcd(gcd, Lcm);

            // cout << Lcm << ' ' << gcd << '\n';
            if ((i > 0 or j > 1) and gcd == 1)
            {
                f = 1;
                break;
            }
        }

        if (f == 1)
            break;
    }

    // gcd = _gcd(LCM[0], LCM[1]);
    // // cout << LCM[0] << ' ' << gcd << '\n';

    // for (int i = 1; i < LCM.size(); i++)
    // {
    //     gcd = _gcd(LCM[i], gcd);
    //     // cout << LCM[i] << ' ' << gcd << '\n';
    // }

    printf("%lld\n", gcd);

    return 0;
}