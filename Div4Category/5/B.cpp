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
#define pll             pair <ll, ll>
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

int Set(int n, int pos) {return n = n | (1 << pos);}
int reset(int n, int pos) {return n = n & ~(1 << pos);}
bool check(int n, int pos) {return (bool)(n & (1 << pos));}

bool leapyr(int x)
{
  return !(x % 400) or (!(x % 4) and (x % 100));
}

int month[13];

int solve()
{
  string s, t;
  cin >> s >> t;
  if (t < s) swap(s, t);

  if (s == t)
    return 0;

  s[4] = s[7] = t[4] = t[7] = ' ';
  stringstream ss(s), tt(t);
  int yr1, yr2, mn1, mn2, dt1, dt2;
  ss >> yr1 >> mn1 >> dt1;
  tt >> yr2 >> mn2 >> dt2;

  // printf("%d %d %d\n%d %d %d\n", yr1, mn1, dt1, yr2, mn2, dt2);

  if (yr1 == yr2)
  {
    if (mn1 == mn2)
      return dt2 - dt1;

    int ans = 0;
    loop(i, mn1 + 1, mn2) ans += month[i];
    ans += month[mn1] - dt1 + dt2;

    if (leapyr(yr1) and mn1 <= 2 and mn2 > 2)
      ans++;

    return ans;
  }

  int ans = (yr2 - yr1 - 1) * 365;
  // cout << "after year " << ans << endl;
  loop(i, mn1 + 1, 13) ans += month[i];
  // cout << "after month1 " << ans << endl;
  loop(i, 1, mn2) ans += month[i];
  // cout << "after month2 " << ans << endl;
  ans += month[mn1] - dt1 + dt2;
  // cout << "after date " << ans << endl;

  loop(i, yr1 + 1, yr2) ans += leapyr(i);
  if (leapyr(yr1) and mn1 <= 2) ans++;
  if (leapyr(yr2) and mn2 > 2) ans++;

  return ans;
}

int main()
{
  // fastio;

  month[1] = 31;
  month[2] = 28;
  month[3] = 31;
  month[4] = 30;
  month[5] = 31;
  month[6] = 30;
  month[7] = 31;
  month[8] = 31;
  month[9] = 30;
  month[10] = 31;
  month[11] = 30;
  month[12] = 31;

  int tt = 1, n;

  // cin >> tt;

  while (tt--)
  {
    cout << solve();
  }

  return 0;
}