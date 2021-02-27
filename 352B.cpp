#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
vector <int> pos[N];
vector <pair <int, int>> res;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    int n, x;

    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> x, pos[x].push_back(i);

    int i = 1;

    while(i < N)
    {
        int saiz = pos[i].size();

        if(!saiz) {
            i++;
            continue;
        }

        if(saiz == 1) {
            res.push_back({i, 0});
            i++;
            continue;
        }

        x = pos[i][1] - pos[i][0];

        bool f = 1;

        for(int j = 1; j < saiz - 1; j++)
        {
            if(pos[i][j + 1] - pos[i][j] != x)
            {
                f = 0;
                break;
            }
        }

        if(f)
            res.push_back({i, x});

        i++;
    }

    int ans = res.size();

    cout << ans << '\n';

    for(int i = 0; i < ans; i++)
        cout << res[i].first << ' ' << res[i].second << '\n';

    return 0;
}
