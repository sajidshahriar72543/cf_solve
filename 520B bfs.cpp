#include<bits/stdc++.h>

using namespace std;

int press[10010], n, m;

bool check(int a)
{
    return a >= 0 and a <= 10005 and a != n;
}

bool update(int x, int y)
{
    if(!press[y] or press[x] + 1 < press[y]) {
        press[y] = press[x] + 1;

        return true;
    }

    else return false;
}

void bfs(int x)
{
    if(x == m)
        return;

    if(check(x - 1) and update(x, x - 1))
        bfs(x - 1);

    if(check(x << 1) and update(x, x << 1))
        bfs(x << 1);
}

int main()
{
    cin >> n >> m;

    bfs(n);

    cout << press[m];

    return 0;
}
