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
    n *= 2;

    ll a[n], ansx;
    map <ll, ll> cnt;
    vpll ans;
    lop(n) cin >> a[i], cnt[a[i]]++;

    sort(a, a + n);

    lop(n - 1)
    {
      ansx = a[n - 1] + a[i];
      ll x = a[n - 1];
      ans.pb({a[n - 1], a[i]});
      cnt[a[n - 1]]--, cnt[a[i]]--;

      for (int j = n - 2; j >= 0; j--)
      {
        if (!cnt[a[j]]) continue;
        if (!cnt[x - a[j]]) break;

        if (x - a[j] == a[j] and cnt[x - a[j]] <= 1) break;

        ans.pb({a[j], x - a[j]});
        cnt[a[j]]--, cnt[x - a[j]]--;
        x = max(a[j], x - a[j]);
      }

      // cout << "inner loop ";
      // cout << ansx << '\n';
      // lop(ans.size()) cout << ans[i].ff << ' ' << ans[i].ss << '\n';

      if (ans.size() == n / 2) break;

      lop(ans.size())
      {
        cnt[ans[i].ff]++;
        cnt[ans[i].ss]++;
      }
      ans.clear();
    }

    if (ans.size() != n / 2)
    {
      no;
      continue;
    }

    yes;
    cout << ansx << '\n';
    lop(ans.size()) cout << ans[i].ff << ' ' << ans[i].ss << '\n';
  }

  return 0;
}