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

int main()
{
  fastio;

  int n;
  cin >> n;

  map <int, int> cnt;
  int cn[n + 5] = {0};
  lop(n)
  {
    int x;
    cin >> x;
    cnt[x]++;
    cn[--x]++;
  }

  if (cnt.size() == 0)
  {
    cout << min(2, cnt.begin() -> ss) << '\n';
    return 0;
  }

  sort(cn, cn + n, greater <int> ());
  int ans = 0, nw = 0, st = 0;

  // loop(i, 1, n)
  // {
  //   if (cn[i] == 0)
  //     break;

  //   int x = min(cn[i], cn[st]);
  //   ans += min(cn[i], cn[st]) * 2;
  //   cout << ans << ' ' << cn[st] << ' ' << cn[i] << ' ';

  //   cn[st] -= min(cn[i], cn[st]);
  //   cn[i] -= x;

  //   if (cn[st] == 0)
  //     st = i;
  //   if (cn[st] == 0)
  //     st++, i++;
  //   cout << st << ' ' << cn[st] << '\n';
  // }

  // if (cn[st])
  //   ans++;

  lop(n)
  {
    if (cn[i] == 1) ans++;
    else if (cn[i] > 1) ans += 2;
  }

  // while(!cn[st]) st++;
  // int mn = cn[st];

  // loop(i, st, n)
  // {
  //   ans += mn;
  //   cn[i] -= mn;

  //   if(cn[i] and i < n - 1)
  //   {
  //     mn += cn[i];
  //     ans += cn[i];
  //     cn[i] = 0;
  //   }
  // }

  cout << ans << '\n';

  return 0;
}