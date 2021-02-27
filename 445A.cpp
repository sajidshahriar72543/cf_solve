#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

const int N = 102;
int n, m;
char grid[N][N], color[2] = {'B', 'W'};

int dr[] = {1, -1, 0, 0};
int dc[] = {0, 0, 1, -1};

//bool check(int x, int y, char c)
//{
////    printf("Now %d %d %c\n", x, y, c);
//    lop(4)
//    {
//        int xx = x + dr[i];
//        int yy = y + dc[i];
//
//        if(xx < 0 or yy < 0 or xx >= n or yy >= m)
//            continue;
//
////        printf("%d %d %c\n", xx, yy, grid[xx][yy]);
//
//        if(grid[xx][yy] == c)
//            return 1;
//    }
//
//    return 0;
//}
//
//void colored(int x, int y, int p)
//{
//    grid[x][y] = color[p];
//    p ^= 1;
//
//    lop(4)
//    {
//        int xx = x + dr[i];
//        int yy = y + dc[i];
//
//        if(xx < 0 or yy < 0 or xx >= n or yy >= m or grid[xx][yy] != '.')
//            continue;
//
//        grid[xx][yy] = color[p];
//    }
//}

void bfs(int x, int y)
{
    queue <pair <int, int>> q;
    q.push({x, y});
    grid[x][y] = color[0];

    while(!q.empty())
    {
        auto u = q.front();
        q.pop();

        lop(4)
        {
            int xx = u.first + dr[i];
            int yy = u.second + dc[i];

            if(xx < 0 or yy < 0 or xx >= n or yy >= m)
                continue;

            if(grid[xx][yy] == '.') {
                if(grid[u.first][u.second] == color[0])
                    grid[xx][yy] = color[1];
                else
                    grid[xx][yy] = color[0];

                q.push({xx, yy});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    lop(n) loop(j, 0 , m) cin >> grid[i][j];

    lop(n) loop(j,0 , m)
    {
        if(grid[i][j] == '.')
            bfs(i, j);
    }

    lop(n)
    {
        loop(j, 0, m)
            cout << grid[i][j];
        cout << endl;
    }

    return 0;
}
