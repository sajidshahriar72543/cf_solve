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


int main()
{
  fastio;

  ll n, q, k;
  cin >> n >> q >> k;

  ll a[n + 3], b[n + 3];
  b[0] = 0; b[n + 1] = k;

  loop(i, 1, n + 1) cin >> a[i];

  loop(i, 1, n + 1)
  {
    if (i == 1)
      b[i] = a[i + 1] - 2;
    // else if(i == n)
    //   b[i] = k - a[i];
    else
      b[i] = a[i + 1] - a[i - 1] - 2;
  }
  b[n]++;

  loop(i, 1, n + 1) b[i] += b[i - 1];

  while (q--)
  {
    int l, r;
    cin >> l >> r;

    ll ans = 0;
    if (l == r)
      ans = k - 1;
    // else if (r - l + 1 == n)
    //   ans = b[n];
    else
    {
      ans = b[r - 1] - b[l];
      ans += a[l + 1] - 2;
      ans += k - a[r - 1] - 1;
    }


    cout << ans << '\n';
  }



  return 0;
}
