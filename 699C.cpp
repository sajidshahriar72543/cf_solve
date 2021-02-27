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
// #define N               (const int) 1e6+5

using namespace std;

int Set(int n, int pos) {return n = n | (1 << pos);}
int reset(int n, int pos) {return n = n & ~(1 << pos);}
bool check(int n, int pos) {return (bool)(n & (1 << pos));}

const int N = 106;
int dp[N][4], n, a[N];

int f(int pos, int last)
{
  if (pos == n)
    return 0;

  int &x = dp[pos][last];
  if (x != -1) return x;

  if (a[pos] == 0)
    return x = 1 + f(pos + 1, 0);

  if (a[pos] == 1)
    return x = last == 3 ? 1 + f(pos + 1, 0) : f(pos + 1, 3);

  if (a[pos] == 2)
    return x = last == 2 ? 1 + f(pos + 1, 0) : f(pos + 1, 2);

  if (last == 0)
    x = min(f(pos + 1, 2), f(pos + 1, 3));
  else if (last == 2)
    x = min(1 + f(pos + 1, 0), f(pos + 1, 3));
  else
    x = min(1 + f(pos + 1, 0), f(pos + 1, 2));

  return x;
}

int main()
{
  fastio;

  cin >> n;
  lop(n) cin >> a[i];

  memset(dp, -1, sizeof dp);
  cout << f(0, 0) << '\n';

  return 0;
}