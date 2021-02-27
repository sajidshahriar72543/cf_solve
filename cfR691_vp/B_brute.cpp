#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

set <pair<int, int>> ep;

void f(int x, int y, int px, int py, int p)
{
    if (p == 0)
    {
        ep.insert({x, y});
        return;
    }

    p--;
    if (py == y)
    {
        f(x, y + 1, x, y, p);
        f(x, y - 1, x, y, p);
    }
    else
    {
        f(x + 1, y, x, y, p);
        f(x - 1, y, x, y, p);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        f(0, 1, 0, 0, n - 1);
        f(1, 0, 0, 0, n - 1);
        f(-1, 0, 0, 0, n - 1);
        f(0, -1, 0, 0, n - 1);

        cout << n << ' ' << ep.size() << '\n';
        ep.clear();
    }

    return 0;
}