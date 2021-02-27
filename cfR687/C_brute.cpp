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

        ll ans = 0;
        for (int i = p; i < n; i += k)
            if (s[i] != '1') ans += x;

        lop(n - p)
        {
            ll cnt = i * y;
            for (int j = i + p; j < n; j += k)
                if (s[j] != '1') cnt += x;
            // cout << i << ' ' << cnt << ' ' << ans << '\n';
            ans = min (cnt, ans);
        }


        cout << ans << '\n';
    }

    return 0;
}
