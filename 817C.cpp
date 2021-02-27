#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

ll d(ll x)
{
    // x /= 10;
    ll s = 0;
    while (x) s += x % 10, x /= 10;
    return s;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    ll n, s;
    cin >> n >> s;

    s = ((s + 8) / 9) * 9;
    ll t = s + 10 - (s % 10);

    for (; t <= n; t += 10)
    {
        if (t - d(t) >= s)
            break;
    }

    cout << max(0LL, n - t + 1) << '\n';

    return 0;
}