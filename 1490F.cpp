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

// #define mod             (const int) 1e9+7
#define PI              acos(-1.0)
// #define inf             (1 << 61)
// #define N               (const int) 1e6+5

using namespace std;

int Set(int n, int pos) {return n = n | (1 << pos);}
int reset(int n, int pos) {return n = n & ~(1 << pos);}
bool check(int n, int pos) {return (bool)(n & (1 << pos));}

void solve()
{
  int n;
  cin >> n;

  int a;
  map <int, int> cnt;
  lop(n) cin >> a, cnt[a]++;

  vin lst;
  for (auto &z : cnt)
    lst.pb(z. ss);
  sorta(lst);

  int ans = INT_MAX, sz = lst.size(), cur[sz + 1];
  cur[0] = 0;
  lop(sz)
  {
    // cout << lst[i] << ' ';
    cur[i + 1] = lst[i] + cur[i];
  }
  // cout << '\n';

  lop(sz)
  {
    int j = lower_bound(all(lst), lst[i]) - lst.begin();
    if (lst[j] != lst[i]) j++;
    int z = cur[j];
    // cout << j << ' ' << z << '\t';
    j = upper_bound(all(lst), lst[i]) - lst.begin();
    z += (cur[sz] - cur[j]) - (lst[i] * (sz - j));
    // cout << j << ' ' << z << ' ' << (cur[sz] - cur[j]) << ' ' << (lst[i] * (n - j)) << '\n';

    ans = min(ans, z);
  }

  cout << ans << '\n';
}

int main()
{
  fastio;

  int tt, n;
  cin >> tt;

  while (tt--)
    solve();

  return 0;
}