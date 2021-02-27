#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll in[1000006];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, q, x;

    cin >> n;

    ll a[n + 1];
    a[0] = 0;

    for(ll i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
        //in[a[i]] = i;
    }

//    for(ll i = a[n]; i > 0; i--) {
//        if(in[i]) x = in[i];
//
//        else in[i] = x;
//    }

    cin >> q;

    for(ll i = 1; i <= q; i++) {
        cin >> x;

        cout << lower_bound(a, a + n + 1, x) - a << endl;
    }

    return 0;
}
