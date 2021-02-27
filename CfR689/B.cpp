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

    char c;
    ll ans = 0;
    int pre[n + 2][m + 2];
    memset(pre, 0, sizeof pre);


    loop(i, 1, n + 1) loop(j, 1, m + 1) {
        cin >> c;

        pre[i][j] = pre[i][j - 1] + (c == '*');
    }

    loop(i, 1, n + 1)
    {
        loop(j, 1, m + 1)
        {
            int l = j, r = j;
            loop(x, i, n + 1)
            {
                if (l < 1 or r > m or pre[x][r] - pre[x][l - 1] < r - l + 1)
                    break;

                ans++, l--, r++;
            }
        }
    }

    cout << ans << '\n';

    return;
}