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
#define pll             pair <int, int>
#define pss             pair <string, string>
#define vpll            vector <pll>

#define fread           freopen("input.txt", "r", stdin)
#define fwrite          freopen("output.txt", "w", stdout)
#define fastio          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

#define mod             (const int) 1e9+7
#define PI              acos(-1.0)
#define inf             (1 << 30)
#define N               (const int) 1e6+5


using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  //freopen("input.txt", "r", stdin)

  int t; cin >> t;
  while (t--)
  {
    int n, q;
    string s;

    cin >> n >> q >> s;

    int a[n + 1];
    pll fw[n + 2], bw[n + 2]; //fw-prefix, bw-suffix, first-max, second-min
    a[0] = 0; fw[0] = {0, 0}; bw[n + 1] = { -inf, inf};

    lop(n)
    {
      if (s[i] == '-')
        a[i + 1] = a[i] - 1;
      else
        a[i + 1] = a[i] + 1;

      fw[i + 1] = {max(fw[i].ff, a[i + 1]), min(fw[i].ss, a[i + 1])};
    }
    for (int i = n; i >= 0; i--)
      bw[i] = {max(a[i], bw[i + 1].ff), min(a[i], bw[i + 1].ss)};
    bw[n + 1] = {max(bw[n].ff, bw[n + 1].ff), min(bw[n].ss, bw[n + 1].ss)};

    while (q--)
    {
      int l, r;
      cin >> l >> r;

      int ans = 0;
      int x = a[r] - a[l - 1];
      int rmn = bw[r + 1].ss, rmx = bw[r + 1].ff;
      int lmn = fw[l - 1].ss, lmx = fw[l - 1].ff;

      if (x < 0)
        rmn += abs(x), rmx += abs(x);
      else
        rmn -= x, rmx -= x;

      cout << max(lmx, rmx) - min(lmn, rmn) + 1 << '\n';
    }
  }

  return 0;
}