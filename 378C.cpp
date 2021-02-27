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
#define dbg(x)          cout << #x << "=" << x << endl
#define dbg2(x, y)      cout << #x << " = " << x << "\t" << #y << " = " << y << endl

#define lop(n)          for(int i = 0; i < n; i++)
#define lopj(n)         for(int j = 0; j < n; j++)
#define loop(k, a, b)   for(int k = a; k < b; k++)
#define loopr(j, b, a)  for(int j = b; j >= a; j--)

#define all(x)          x.begin(), x.end()
#define sorta(x)        sort(x.begin(), x.end())
#define sortd(x)        sort(x.rbegin(), x.rend())
#define mem0(a)         memset(a, 0, sizeof(a))
#define mem1(a)         memset(a, -1, sizeof(a))

#define vin             vector <int>
#define vll             vector <ll>
#define vst             vector <string>
#define pll             pair <int, int>
#define pss             pair <string, string>
#define vpll            vector <pll>

#define fread           freopen("input.txt", "r", stdin)
#define fwrite          freopen("output.txt", "w", stdout)
#define fastio          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

#define mod             (const int) 1e9+7
#define PI              acos(-1.0)
#define inf             (1 << 61)
// #define N               (const int) 1e6+5

using namespace std;

const int N = 503;
int n, m, k, s;
char grid[N][N], ans[N][N];
bool vis[N][N];
int dr[] = {1, -1, 0, 0};
int dc[] = {0, 0, 1, -1};

bool check(int x, int y)
{
  return x < 0 or y < 0 or x >= n or y >= m or vis[x][y];
}

void bfs(int x, int y)
{
  queue <pll> q;
  q.push({x, y});
  vis[x][y] = 1;
  ans[x][y] = '.';
  int cnt = 1;

  while (!q.empty() and cnt < s - k)
  {
    auto uu = q.front();
    q.pop();
    int x = uu.ff, y = uu.ss;

    lop(4)
    {
      int xx = x + dr[i], yy = y + dc[i];
      if (check(xx, yy)) continue;

      vis[xx][yy] = 1;
      cnt++;
      ans[xx][yy] = '.';
      q.push({xx, yy});

      if (cnt == s - k) break;
    }
  }
}

int main()
{
  fastio;

  cin >> n >> m >> k;
  lop(n) lopj(m)
  {
    cin >> grid[i][j];
    s += grid[i][j] == '.';
    vis[i][j] = grid[i][j] == '#';
  }

  lop(n) lopj(m)
  if (grid[i][j] == '.')
  {
    bfs(i, j);
    lop(n) lopj(m)
    {
      if (ans[i][j] == '.') continue;

      ans[i][j] = grid[i][j] == '#' ? '#' : 'X';
    }

    lop(n)
    {
      lopj(m) cout << ans[i][j];
      cout << '\n';
    }

    return 0;
  }
}