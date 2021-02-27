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
// #define inf             (1LL << 61)
// #define N               (const int) 1e6+5

using namespace std;

struct voucher
{
  int left, right;
  ll cost;

  bool operator < (const voucher &b) const
  {
    return left < b.left;
  }
};

const ll N = 2e5 + 5, inf = 1LL << 58;
int n, x;
vector <pair <int, ll>> dur[N];
voucher ticket[N];

ll bs(int d, int r)
{
  if (d <= 0 or !dur[d].size())
    return inf;

  // cout << d << '\n';

  int sz = dur[d].size();
  int lo = 0, hi = sz - 1, m;
  while (lo <= hi)
  {
    m = (lo + hi) / 2;
    // cout << m << '\t';

    if (dur[d][m].ff <= r)
      lo = m + 1;
    else
      hi = m - 1;
  }
  // cout << lo << '\n';

  return lo < sz ? dur[d][lo].ss : inf;
}

int main()
{
  fastio;

  cin >> n >> x;
  lop(n) cin >> ticket[i].left >> ticket[i].right >> ticket[i].cost;

  sort(ticket, ticket + n);
  lop(n)
  {
    int j = ticket[i].right - ticket[i].left + 1;
    dur[j].pb({ticket[i].left, ticket[i].cost});
  }

  lop(N)
  {
    int sz = dur[i].size();
    if (!sz) continue;

    ll c = dur[i].back().ss;
    while (sz--)
    {
      if (dur[i][sz].ss < c)
        c = dur[i][sz].ss;
      else
        dur[i][sz].ss = c;
    }
  }

  ll ans = inf;

  lop(n)
  {
    ll d = ticket[i].right - ticket[i].left + 1;
    ll required = x - d;

    ans = min(ans, bs(required, ticket[i].right) + ticket[i].cost);
    // cout << required << ' ' << ans << '\n';
  }

  cout << (ans < inf ? ans : -1) << '\n';

  return 0;
}