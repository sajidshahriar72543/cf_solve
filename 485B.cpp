#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll a, n, k, b;

    cin >> n;

    ll x[n], y[n];

    for(k = 0; k < n; k++)
    {
        cin >> x[k] >> y[k];
    }

    sort(x, x + n, greater <ll> ());
    sort(y, y + n, greater <ll> ());

    a = x[0] - x[n - 1];
    b = y[0] - y[n - 1];

    cout << max(a, b) * max(a, b) << "\n";

    return 0;
}

