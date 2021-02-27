#include<bits/stdc++.h>

#define ll              long long
#define pb              push_back
#define ff              first
#define ss              second

#define yes             cout << "Yes\n"
#define no              cout << "No\n"
#define Case(i)         cout << "Case " << int(i) << ": "
#define dbg(x)          cout << #x << " = " << x << endl
#define dbg2(x, y)      cout << #x << " = " << x << "\t" << #y << " = " << y << endl

#define lop(n)          for(int i = 0; i < n; i++)
#define lopj(n)         for(int j = 0; j < n; j++)

#define all(x)          x.begin(), x.end()
#define sorta(x)        sort(x.begin(), x.end())
#define sortd(x)        sort(x.rbegin(), x.rend())
#define popcount(x)     __builtin_popcount(x)

#define vin             vector <int>
#define vll             vector <ll>
#define vst             vector <string>
#define pll             pair <ll, ll>
#define pii             pair <int, int>
#define pss             pair <string, string>
#define vpll            vector <pll>
#define vpii            vector <pii>

#define fread           freopen("input.txt", "r", stdin)
#define fwrite          freopen("output.txt", "w", stdout)
#define fastio          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

#define PI              acos(-1.0)

using namespace std;

const int N = 130, inf = 1 << 28, M = 2e6 + 3;
vin pos[N];
int n, m, start[M], finish[M];
string s, t;

int main()
{
  fastio;

  cin >> n >> m >> s >> t;
  lop(n) pos[s[i]].pb(i);

  int pre = pos[t[0]][0], post = pos[t[m - 1]].back();
  start[0] = pre, finish[m - 1] = post;
  for (int i = 1; i < m; i++)
  {
    int j = upper_bound(all(pos[t[i]]), pre) - pos[t[i]].begin();

    start[i] = pre = pos[t[i]][j];
  }
  for (int i = m - 2; i >= 0; i--)
  {
    int j = lower_bound(all(pos[t[i]]), post) - pos[t[i]].begin() - 1;

    finish[i] = post = pos[t[i]][j];
  }

  int ans = 0;
  for (int i = 1; i < m; i++)
    ans = max(ans, finish[i] - start[ i - 1]);

  cout << ans << '\n';

  return 0;
}