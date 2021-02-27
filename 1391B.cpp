#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        char grid[n][m];

        for(auto &z : grid) cin >> z;

        int ans = 0;
        for(int i = 0; i < n - 1; i++)
            ans += grid[i][m - 1] == 'R';
        for(int i = 0; i < m - 1; i++)
            ans += grid[n - 1][i] == 'D';

        cout << ans << '\n';
    }

    return 0;
}
