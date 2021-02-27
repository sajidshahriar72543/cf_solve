#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define N 2 * 1000009

ll a[N], ans;

void beauty(ll n)
{
    if(n == 0)
        return;

    for(int i = 0; i < n; i++)
        ans += a[i];

    beauty(n / 4);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n4, n = 0;

    cin >> n4;

    for(int i = 0; i < n4; i++) {
        cin >> a[i];
        n += a[i];
    }

    sort(a, a + n4, greater <ll> ());

    beauty(n4 / 4);

    cout << ans + n << '\n';

    return 0;
}
