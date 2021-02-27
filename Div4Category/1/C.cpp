#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x, test;

    cin >> test;

    while (test--)
    {
        ll s, t, e;
        cin >> s >> t >> e;

        ll ans = 0;

        if (s < t)
        {
            e -= t - s + 1;
            s = t + 1;
        }

        if (e > 0)
        {
            if (e + t < s)
            {
                ans += e + 1;
            }
            else
            {
                ans += s - t - 1;
                e -= (s - t - 1);
                ans += (e / 2) + 1;
            }
        }
        else if (e == 0 and s > t)
            ans++;

        cout << ans << '\n';
    }

    return 0;
}
