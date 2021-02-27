#include<bits/stdc++.h>

#define ll              long long
#define pb              push_back
#define ff              first
#define ss              second
#define mp              make_pair

#define scan(a)         scanf("%d", &a)
#define scanl(a)        scanf("%lld", &a)
#define scand(a)        scanf("%lf", &a)
#define scan2(a, b)     scanf("%d %d", &a, &b)
#define scanl2(a, b)    scanf("%lld %lld", &a, &b)
#define scand2(a, b)    scanf("%lf %lf", &a, &b)

#define yes             cout << "yes\n"
#define no              cout << "no\n"
#define Case(i)         cout << "Case " << int(i) << ": "

#define lop(n)          for(int i = 0; i < n; i++)
#define lopj(n)         for(int j = 0; j < n; j++)
#define lopr(a, n)      for(int k = a; k < n; k++)
#define lrev(n, a)      for(int i = n; i >= a; i--)

#define all(x)          x.begin(), x.end()
#define mem(a, b)       memset(a, b, sizeof(a))

#define vin             vector <int>
#define vll             vector <ll>
#define vst             vector <string>
#define pll             pair <ll, ll>
#define pss             pair <string, string>
#define vpll            vector <pll>

#define fread           freopen("input.txt", "r", stdin)
#define fwrite          freopen("output.txt", "w", stdout)
#define fastio          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

#define mod             1000000007
#define PI              acos(-1.0)
#define inf             999999999999
#define N               100009

using namespace std;

vpll tree[N];
bool vis[N];
queue <int>line;
int n;
ll wt[N];

void bfs();
void init();

int main()
{
    fastio;

    int tt, x;

    cin >> tt;

    while(tt--)
    {
        cin >> n >> x;

        ll u, v, w;

        lop(n - 1)
        {
            cin >> u >> v >> w;

            u--, v--;

            tree[u].pb({v, w});
            tree[v].pb({u, w});
        }

        //bfs();

        ll target = x / (n - 1), save = x - (target * (n - 1)), mv = 0;

        lop(n)
        {
            cout << i << '\t' << wt[i] << ' ';
            while(wt[i] > target + save)
                wt[i] /= 2, mv++, cout << wt[i] << ' ';
                cout << '\n';

            save  += target - wt[i];
        }

        cout << mv << '\n';

        init();
    }



    return 0;
}

void bfs()
{
    line.push(1);
    vis[0] = 1;
    wt[0] = 0;

    while(!line.empty())
    {
        int u = line.front();
        line.pop();
        int saiz = tree[u].size();

        lop(saiz)
        {
            pll v = tree[u][i];

            if(!vis[v.ff])
            {
                line.push(v.ff);
                vis[v.ff] = 1;
                wt[v.ff] = wt[u] + v.ss;
            }
        }
    }
}

void init()
{
    lop(n)
    {
        tree[i].clear();
        vis[i] = 0;
    }
}

