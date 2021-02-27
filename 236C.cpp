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
    ll n, lc1, lc2, mlc = 0, p = 1;

    cin >> n;

    if(n == 1)
        cout << 1 << endl;
    else if(n == 2)
        cout << 2 << endl;
    else if(n % 2)
        cout << n * (n - 1) * (n - 2) << endl;
    else
    {
        for(int i = max(p, n - 70); i <= n; i++)
            for(int j = i + 1; j <= n; j++) {
                for(int k = j + 1; k <= n; k++) {
                    lc2 = lcmm(i, j, k);
                    mlc = max(lc2, mlc);
                }
            }
        cout << mlc << endl;
    }

    return 0;
}
