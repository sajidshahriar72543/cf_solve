#include<bits/stdc++.h>

#define ll              long long
#define pb              push_back
#define ff              first
#define ss              second

#define yes             cout << "Yes\n"
#define no              cout << "No\n"
#define Case(i)         cout << "Case " << int(i) << ": "
#define dbg(x)          cout << #x << " = " << x << endl
#define dbg2(x, y)      cout << #x << " = " << x << "\t" << #y << " = " << y << endl

#define lop(n)          for(int i = 0; i < n; i++)
#define lopj(n)         for(int j = 0; j < n; j++)

#define all(x)          x.begin(), x.end()
#define sorta(x)        sort(x.begin(), x.end())
#define sortd(x)        sort(x.rbegin(), x.rend())
#define popcount(x)     __builtin_popcount(x)

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

const int N = 1e3 + 2;
int deg[N];

int main()
{
  fastio;

  int tt;

  cin >> tt;

  while (tt--)
  {
    int x, n;
    cin >> n >> x;

    lop(n - 1)
    {
      int a, b;
      cin >> a >> b;
      deg[a]++;
      deg[b]++;
    }

    cout << (deg[x] <= 1 or !(n & 1) ? "Ayush" : "Ashish") << '\n';
    memset(deg, 0, sizeof deg);

  }

  return 0;
}