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
#define N               (const int) 1e6+5

using namespace std;

int sq(int x)
{
  return x * x;
}

int dist(int x1, int y1, int x2, int y2)
{
  return sq(x1 - x2) + sq(y1 - y2);
}

int main()
{
  fastio;

  int xa, ya, xb, yb;
  cin >> xa >> ya >> xb >> yb;

  map <pll, bool> seat;
  loop(i, min(yb, ya), max(ya, yb) + 1) seat[ {xa, i}] = 0;
  loop(i, min(yb, ya), max(ya, yb) + 1) seat[ {xb, i}] = 0;
  loop(i, min(xb, xa) + 1, max(xa, xb)) seat[ {i, ya}] = seat[ {i, yb}] = 0;

  int n;
  cin >> n;
  int rx[n], ry[n], r[n];
  lop(n) cin >> rx[i] >> ry[i] >> r[i];

  int ans = 0;
  for (auto &z : seat)
  {
    // cout << z.ff.ff << ' ' << z.ff.ss << '\n';
    lop(n)
    {
      int dis = dist(z.ff.ff, z.ff.ss, rx[i], ry[i]);

      if (dis <= sq(r[i]))
      {
        // cout << rx[i] << ' ' << ry[i] << ' ' << r[i] << ' ' << dis << '\n';
        z.ss = 1;
        break;
      }
    }

    ans += !z.ss;
  }

  cout << ans << '\n';

  return 0;
}