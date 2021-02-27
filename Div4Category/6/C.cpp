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
  int n, k;
  cin >> n;

  int win[n + 2] = {0}, draw[n + 2] = {0};

  if (n & 1)
  {
    int wn = (n / 2) * 3;
    for (int i = 1; i <= n; i++)
      for (int j = i + 1; j <= n; j++)
      {
        if (win[i] < wn)
        {
          cout << 1 << ' ';
          win[i] += 3;
        }
        else
        {
          cout << -1 << ' ';
          win[j] += 3;
        }
      }
  }

  else
  {
    int wn = (((n - 1) / 2) * 3 ) + 1;
    for (int i = 1; i <= n; i++)
      for (int j = i + 1; j <= n; j++)
      {
        if (win[i] == wn)
        {
          cout << -1 << ' ';
          win[j] += 3;
        }
        else if (win[i] + 3 <= wn)
        {
          cout << 1 << ' ';
          win[i] += 3;
        }
        else
        {
          cout << 0 << ' ';
          win[i]++;
          win[j]++;
        }
      }
  }
  cout << '\n';
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