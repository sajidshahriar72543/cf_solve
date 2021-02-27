#include<bits/stdc++.h>

using namespace std;

#define close(x) {cout << x << endl; return 0;}

struct edge {
    int u, v, w;

    bool operator<(const edge& p) const
    {
        return w < p.w;
    }
};

set <int> a, f;
vector<edge> e;

int main()
{
    int n, m;

    cin >> n >> m;

    for (int i = 1; i <= m; i++) {
        int u, v, w;
        cin >> u >> v >> w;

        edge get;
        get.u = u;
        get.v = v;
        get.w = w;
        e.push_back(get);
    }

    sort(e.begin(), e.end());

    for(int i = 0; i < m; i++)
    {
        a.insert(e[i].u);
        f.insert(e[i].v);

        int x = a.size(), y = f.size();

        if(x == n and y == n)
            close(e[i].w)
    }

    close(-1)
}
