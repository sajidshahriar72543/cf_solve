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

  int tt, n;

  cin >> tt;

  while (tt--)
  {
    cin >> n;
    ll ed[n], a[n], b[n];
    lop(n) cin >> ed[i];
    lop(n) cin >> a[i];
    lop(n) cin >> b[i];

    ll ans = 0, c = abs(a[1] - b[1]) + 2, ans2 = 0;
    ans2 = max(ans2, c + ed[1] - 1);

    // cout << c << ' ';
    loop(i, 2, n)
    {
      // if (i == n - 1)
      // {
      //   c += ed[i] - 1;
      //   break;
      // }

      // if (ans == 0)
      {
        ans2 = max(ans2, c + ed[i] - 1);
      }

      if (a[i] == b[i] or a[i] > b[i])
      {
        c += ed[i] - 1;
        ans = max(ans, c);
        c = 2;
      }
      // else if(a[i] > b[i])
      // {
      //   ;
      // }
      else
      {
        c += a[i] - 1;
        // if (ans)
        c += 2;
      }
      // cout << c << ' ' << ans << '\n';
    }
    c += ed[n - 1] - 1;
    // if (ans == 0) c -= 2;
    // cout << ans2 << ' ';

    cout << max({ans, c, ans2}) << '\n';
  }

  return 0;
}