#include<bits/stdc++.h>

using namespace std;

const int N = 72, inf = (1 << 30);
int n, m, k;
int mat[N][N], dp[N][N][N][N];

int f(int x, int y, int c, int r)
{
    if(x == n)
    {
        if(r == 0) return 0;
        else return -inf;
    }

    int &ret = dp[x][y][c][r];

    if(ret != -1)
        return ret;

    if(y == m - 1)
        ret = f(x + 1, 0, 0, r);
    else
        ret = f(x, y + 1, c, r);

    if(c < m / 2)
    {
        int z, rm = (r + mat[x][y]) % k;
        if(y == m - 1)
           z =  mat[x][y] + f(x + 1, 0, 0, rm);
        else
            z = mat[x][y] + f(x, y + 1, c + 1, rm);

        ret = max(ret, z);
    }

    return ret;
}

int main()
{
    cin >> n >> m >> k;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> mat[i][j];

    memset(dp, -1, sizeof dp);

    cout << max(0, f(0, 0, 0, 0)) << '\n';

    return 0;
}
