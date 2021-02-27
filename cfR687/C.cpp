#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int test;

    cin >> test;

    while (test--)
    {
        ll n, p, k, x, y;
        string s;
        cin >> n >> p >> k >> s >> x >> y;
        p--;

        ll c[n + k] = {0};

        for (int i = n - 1; i >= p; i--)
            c[i] = !(s[i] - '0') + c[i + k];

        ll ans = 1e16;
        loop(i, p, n)
        ans = min(ans, (((i - p) * y) + (c[i] * x)));

        cout << ans << '\n';
    }

    return 0;
}
