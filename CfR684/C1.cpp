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

    int x, test;

    cin >> test;

    while (test--)
    {
        int n, m;
        cin >> n >> m;

        string s[n];
        lop(n) cin >> s[i];

        int ans = 0;
        lop(n) ans += count(s[i]. begin(), s[i].end(), '1') * 3;

        cout << ans << '\n';

        lop(n) loop(j, 0, m)
        {
            if (s[i][j] == '0') continue;

            int cur_x = i + 1, cur_y = j + 1;
            int next1_x = i < n - 1 ? i + 2 : i;
            int next1_y = j < m - 1 ? j + 2 : j;
            int next2_x = i < n - 1 ? i + 2 : i, next2_y = j + 1;
            int next3_x = i + 1, next3_y = j < m - 1 ? j + 2 : j;


            cout << cur_x << ' ' << cur_y << ' ';
            cout << next2_x << ' ' << next2_y << ' ';
            cout << next1_x << ' ' << next1_y << '\n';

            cout << cur_x << ' ' << cur_y << ' ';
            cout << next2_x << ' ' << next2_y << ' ';
            cout << next3_x << ' ' << next3_y << '\n';

            cout << cur_x << ' ' << cur_y << ' ';
            cout << next3_x << ' ' << next3_y << ' ';
            cout << next1_x << ' ' << next1_y << '\n';
        }
    }

    return 0;
}
