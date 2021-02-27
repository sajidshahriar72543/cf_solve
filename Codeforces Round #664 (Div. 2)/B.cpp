#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"
#define N 101

int n, m, sx, sy, c;
bool vis[N][N];

void dfs(int x, int y)
{
    if(x < 1 or y < 1 or x > n or y > m or c >= n * m)
    {
        //cout << "returned\n";
        return;
    }

    if(!vis[x][y])
    {
        cout << x << ' ' << y << '\n';
        c++;
    }

    vis[x][y] = 1;

    dfs(x + 1, y);
    dfs(x - 1, y);
    dfs(x, y + 1);
    dfs(x, y - 1);
}

int main()
{
    cin >> n >> m >> sx >> sy;

    //dfs(sx, sy);

    while(1)
    {
        if(!vis[sx][sy])
        {
            cout << sx << ' ' << sy << '\n';
            c++;
            vis[sx][sy] = 1;
        }
        sy++;

        if(sy == m)
        {
            if(!vis[sx][sy])
            {
                cout << sx << ' ' << sy << '\n';
                c++;
                vis[sx][sy] = 1;
            }
            break;
        }
    }

    while(1)
    {
        if(!vis[sx][sy])
        {
            cout << sx << ' ' << sy << '\n';
            c++;
            vis[sx][sy] = 1;
        }
        sy--;

        if(sy == 1)
        {
            if(!vis[sx][sy])
            {
                cout << sx << ' ' << sy << '\n';
                c++;
                vis[sx][sy] = 1;
            }
            break;
        }
    }

    int tar;

    while(c < n * m)
    {
        if(sx < n)
            sx++;
        else
            break;

        if(sy == 1)
            tar = m;
        else tar = 1;

        while(1)
        {
            if(!vis[sx][sy])
            {
                cout << sx << ' ' << sy << '\n';
                c++;
                vis[sx][sy] = 1;
            }
            if(tar == m)
                sy++;
            else
                sy--;

            if(sy == tar)
            {
                if(!vis[sx][sy])
                {
                    cout << sx << ' ' << sy << '\n';
                    c++;
                    vis[sx][sy] = 1;
                }
                break;
            }
        }
    }

    while(1)
    {
        if(!vis[sx][sy])
        {
            cout << sx << ' ' << sy << '\n';
            c++;
            vis[sx][sy] = 1;
        }
        sx--;
        if(sx == 1)
        {
            if(!vis[sx][sy])
            {
                cout << sx << ' ' << sy << '\n';
                c++;
                vis[sx][sy] = 1;
            }
            break;
        }
    }

    bool f = 0;

    while(c < n * m)
    {
        if(sx < n and f)
            sx++;
        else if(sx == n)
            break;

        f = 1;

        if(sy == 1)
            tar = m;
        else tar = 1;

        while(1)
        {
            if(!vis[sx][sy])
            {
                cout << sx << ' ' << sy << '\n';
                c++;
                vis[sx][sy] = 1;
            }
            if(tar == m)
                sy++;
            else
                sy--;

            if(sy == tar)
            {
                if(!vis[sx][sy])
                {
                    cout << sx << ' ' << sy << '\n';
                    c++;
                    vis[sx][sy] = 1;
                }
                break;
            }
        }
    }

    return 0;
}

