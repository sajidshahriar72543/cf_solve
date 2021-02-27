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

#define yes             cout << "YES\n"
#define no              cout << "NO\n"
#define Case(i)         cout << "Case " << int(i) << ": "

#define lop(n)          for(int i = 0; i < n; i++)
#define lopj(n)         for(int j = 0; j < n; j++)
#define loop(k, a, b)   for(int k = a; k < b; k++)
#define loopr(j, b, a)  for(int j = b; j >= a; j--)
#define lopc(i, a, b, c) for(int i = a; i < b; i += c)

#define all(x)          x.begin(), x.end()
#define sorta(x)        sort(x.begin(), x.end())
#define sortd(x)        sort(x.rbegin(), x.rend())
#define mem0(a)         memset(a, 0, sizeof(a))
#define mem1(a)         memset(a, -1, sizeof(a))

#define vin             vector <int>
#define vll             vector <ll>
#define vst             vector <string>
#define pll             pair <ll, ll>
#define pss             pair <string, string>
#define vpll            vector <pll>

#define fread           freopen("input.txt", "r", stdin)
#define fwrite          freopen("output.txt", "w", stdout)
#define fastio          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

#define mod             (const int) 1e9+7
#define PI              acos(-1.0)
#define inf             (1 << 61)
#define N               (const int) 2e5+5


using namespace std;

int n, m, cat_count[N], ans;
vector<int>edge[N];
bool vis[N], cat[N];

void dfs(int u, int v)
{
  cat_count[v] = (cat[v] ? cat_count[u] + 1 : cat[v]);
  // cout << u << ' ' << v << ' ' << cat_count[v] << '\n';
  if (cat_count[v] > m) return;

  int saiz = edge[v].size();
  if (u != v and saiz == 1) ans++;

  // cout << "saiz " << saiz << ' ' << ans << '\n';
  lop(saiz) if (edge[v][i] != u) dfs(v, edge[v][i]);
}

int main()
{
  fastio;

  cin >> n >> m;
  lop(n) cin >> cat[i + 1];

  lop(n - 1)
  {
    int u, v;
    cin >> u >> v;

    edge[u].pb(v);
    edge[v].pb(u);
  }

  dfs(1, 1);

  cout << ans;

  return 0;
}