#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

void solve();

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x, test;

    cin >> test;

    while (test--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    int a[n][m];
    char c;
    ll ans = 0;
    bool vis[n][m];
    memset(vis, 0, sizeof vis);


    lop(n) loop(j, 0, m) {
        cin >> c;

        a[i][j] = c == '*' ? 1 : 0;
        if (c == '*') ans++;
    }

    lop(n)
    {
        loop(j, 0, m)
        {
            if (!a[i][j]) continue;

            int k = 0, l = j, r = j;
            // cout << i << ' ' << j << '\n';
            loop(x, i, n)
            {
                int f = 1;
                if (l < 0 or r >= m) break;
                // cout << "l/r " << l << ' ' << r << '\n';

                loop(y, l, r + 1)
                {
                    if (!a[x][y]) {
                        f = 0;
                        // cout << "zero " << x << ' ' << y << '\n';
                        break;
                    }
                }

                if (!f) break;
                k++;

                // if (l - 1 >= 0 and r + 1 < m)
                //     loop(y, l, r + 1) vis[x][y] = 1;

                l--, r++;
            }

            if (k == 1) continue;

            ans += k - 1;

            // cout << ans << ' ' << k << '\n';
        }
    }

    cout << ans << '\n';

    return;
}