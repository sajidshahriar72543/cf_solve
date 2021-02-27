#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


int main()
{
    ll n;

    cin >> n;

    ll a[n];

    for(auto &z : a) cin >> z;

    sort(a, a + n, greater <ll> ());

    ll x = 0, y = 0, ans;

    for(auto &z : a) {
        if(z == a[0])
            x++;
        else break;
    }

    for(ll z = n - 1; z >= 0; z--) {
        if(a[z] == a[n - 1])
            y++;
        else break;
    }

    //cout << x << y;

    if(x == n or y == n) {
        --n;
        ans = (n * (n + 1)) / 2;
    }
    else
        ans = x * y;

    cout << a[0] - a[n - 1] << " " << ans << '\n';

    //main();

    return 0;
}
