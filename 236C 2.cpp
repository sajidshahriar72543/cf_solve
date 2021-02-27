#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll lcmm(ll a, ll b, ll c)
{
    ll x = (a * b) / __gcd(a, b);
    return (x * c) / __gcd(x, c);
}

int main()
{
    ll n, lc1, lc2;

    cin >> n;

    if(n == 1)
        cout << 1 << endl;
    else if(n == 2)
        cout << 2 << endl;
    else if(n % 2)
        cout << n * (n - 1) * (n - 2) << endl;
    else
    {
        lc1 = (n - 1) * (n - 2) * (n - 3);
        lc2 = lcmm(n, n - 1, n - 3);

        cout << max(lc1, lc2) << endl;
    }

    return 0;
}

