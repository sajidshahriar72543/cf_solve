#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

struct Node
{
    int v, w;

    Node(int _v, int _w)
    {
        v = _v;
        w = _w;
    }

    bool operator < (const Node &b) const
    {
        return w < b.w;
    }
};

int sq(int x)
{
    return x * x;
}

const int N = 2e5 + 3, inf = 1 << 28;
int n, m, dis[N];
vector <Node> adj[N], tmp[N];
set <Node> st;
// unordered_map <int, int> vis;


void dijkastra()
{
    for (int i = 2; i <= n; i++)
        dis[i] = inf;

    priority_queue <Node> q;
    q.push(Node(1, 0));
    dis[1] = 0;

    while (!q.empty())
    {
        auto uu = q.top();
        q.pop();
        int u = uu.v;
        // cout << u << " -> \n";
        for (auto &vv : adj[u])
        {
            int v = vv.v, c = vv.w;
            if (c == inf) continue;

            if (dis[u] + sq(c) < dis[v])
            {
                dis[v] = dis[u] + sq(c);
                q.push(Node(v, dis[v]));
            }

            // cout << v << ' ' << dis[v] << ' ' << dis[u] + sq(c) << '\n';
        }
    }
}

// void dijkastra2()
// {
//     for (int i = 1; i <= n; i++)
//         dis[i] = dis2[i] = inf;

//     priority_queue <Node> q;
//     q.push(Node(1, 0));
//     dis[1] = 0;

//     while (!q.empty())
//     {
//         auto uu = q.top();
//         q.pop();
//         int u = uu.v;
//         cout << u << " -> \n";
//         for (auto &vv : adj[u])
//         {
//             int v = vv.v, c = vv.w;

//             if (u == 1 and dis2[v] > c)
//             {
//                 q.push(Node(vv));
//                 dis2[v] = c;
//             }
//             dis2[v] = min(dis2[v], c);

//             // if (dis2[u] == inf or v == 1 or dis[u] == inf) continue;
//             if (sq(dis2[u] + c) < dis[v])
//             {
//                 dis[v] = sq(dis2[u] + c) + (dis[u] == inf ? 0 : dis[u]);
//                 q.push(Node(v, dis[v]));
//             }

//             cout << v << ' ' << dis[v] << ' ' << dis2[u] << '\n';
//         }
//     }
// }

void rerouting()
{
    // queue <int> q;
    // vis[1] = 1;
    // q.push(1);

    // while(!q.empty())
    // {
    //     int u = q.front();
    //     q.pop();

    //     for(auto &vv : tmp[u])
    //     {
    //         if(!vis[vv.v])
    //         {

    //         }
    //     }
    // }

    for (int i = 1; i <= n; i++)
    {
        // st.clear();
        for (auto &zz : tmp[i])
        {
            int z = zz.v;
            for (auto &v : tmp[z])
            {
                int d = zz.w + v.w;
                if (v.v != i and v.v != 1)
                {
                    // if (vis.find(v.v) == vis.end())
                    //     vis.insert({v.v, d});
                    // else if (vis[v.v] > d)
                    //     vis[v.v] = d;
                    // auto it = st.find(Node(v.v, d));
                    // if (it == st.end())
                    //     st.insert(Node(v.v, d));
                    // else if (it -> w > d)
                    // {
                    //     st.erase(it);
                    //     st.insert(Node(v.v, d));
                    // }

                    // st[v.v].insert(Node(i, d));
                    // if (!vis[ {i, v.v}] or vis[ {i, v.v}] > d)
                    // {
                    //     adj[i].push_back(Node(v.v, d));
                    //     vis[ {i, v.v}] = d;
                    // }
                    // if (!vis[ {v.v, i}] or vis[ {v.v, i}] > d)
                    // {
                    //     adj[v.v].push_back(Node(i, d));
                    //     vis[ {v.v, i}] = d;
                    // }
                    // else cout << "false " << i << ' ' << v.v << ' ' << d << ' ' << vis[Node(i, d)] << '\n';

                    // vis[Node(v.v, d)] = 1;
                    // vis[Node(v.v, d)] = vis[Node(i, d)] = 1;
                    adj[i].push_back(Node(v.v, d));
                    // adj[v.v].push_back(Node(i, d));
                }
            }
        }
        // for (auto &zz : st)
        //     adj[i].push_back(zz);
    }

    // for (int i = 1; i <= n; i++)
    //     for (auto &zz : tmp[i])
    //         if (vis[ {i, zz.v}] < zz.w)
    //             zz.w = inf;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (auto &zz : vis[i])
    //     {
    //         adj[i].push_back(Node(zz.first, zz.second));
    //         // adj[zz.v].push_back(Node(i, zz.w));
    //     }
    // }
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
#endif

    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v, c;
        cin >> u >> v >> c;

        tmp[u].push_back(Node(v, c));
        tmp[v].push_back(Node(u, c));
    }

    // for (int i = 1; i <= n; i++)
    //     sort(adj[i].rbegin(), adj[i].rend());

    rerouting();

    for (int i = 1; i <= n; i++)
    {
        for (auto &z : adj[i])
            cout << i << ' ' << z.v << ' ' << z.w << '\n';
    }

    dijkastra();

    for (int i = 1; i <= n; i++)
        cout << (dis[i] != inf ? dis[i] : -1) << ' ';

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.4fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}