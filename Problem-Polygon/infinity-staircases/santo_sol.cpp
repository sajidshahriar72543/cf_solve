#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define deb(x)          cout << #x << "=" << x << endl
#define deb2(x, y)      cout << #x << "=" << x << " , " << #y << "=" << y << endl
#define _               ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve()
{
    ll n, m;
    cin >> n;

    ll res = (n / 5) * 2;

    if (n % 5 == 4) res += 2;
    else res++;

    cout << res << '\n';
}


int main()
{   _
    int t = 1;

    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}