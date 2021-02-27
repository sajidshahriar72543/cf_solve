#include<bits/stdc++.h>

#define ll              long long
#define pb              push_back
#define ff              first
#define ss              second

#define yes             cout << "Yes\n"
#define no              cout << "No\n"
#define Case(i)         cout << "Case " << int(i) << ": "
#define dbg(x)          cout << #x << "=" << x << endl
#define dbg2(x, y)      cout << #x << " = " << x << "\t" << #y << " = " << y << endl

#define lop(n)          for(int i = 0; i < n; i++)
#define lopj(n)         for(int j = 0; j < n; j++)

#define all(x)          x.begin(), x.end()
#define sorta(x)        sort(x.begin(), x.end())
#define sortd(x)        sort(x.rbegin(), x.rend())
#define mem0(a)         memset(a, 0, sizeof(a))
#define mem1(a)         memset(a, -1, sizeof(a))

#define vin             vector <int>
#define vll             vector <ll>
#define vst             vector <string>
#define pll             pair <ll, ll>
#define pii             pair <int, int>
#define pss             pair <string, string>
#define vpll            vector <pll>
#define vpii            vector <pii>

#define fread           freopen("input.txt", "r", stdin)
#define fwrite          freopen("output.txt", "w", stdout)
#define fastio          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

#define PI              acos(-1.0)

using namespace std;

int Set(int n, int pos) {return n = n | (1 << pos);}
int reset(int n, int pos) {return n = n & ~(1 << pos);}
bool check(int n, int pos) {return (bool)(n & (1 << pos));}

void solve()
{
  ll n, k;
  cin >> n >> k;

  if (n & 1)
  {
    ll kk = k % (n * (n - 1));
    if (!kk)
      kk = n * (n - 1);


    k = kk % (n - 1);
    if (!k)
      k = n - 1;
    ll p = (kk + n - 2) / (n - 1);

    if (k > n / 2)
      k++;

    // cout << kk << ' ' << k << ' ' << p << '\t';
    cout << ((p + k - 1) % n) + ((p + k - 1) % n ? 0 : n) << '\n';
  }

  else
  {
    cout << (k % n) + (k % n ? 0 : n) << '\n';
  }
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