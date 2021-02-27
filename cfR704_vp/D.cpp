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

int main()
{
  fastio;

  int a, b, k;
  cin >> a >> b >> k;

  string s, t;
  lop(b) s += '1';
  lop(a) s += '0';
  t = s;

  if (k == 0)
  {
    yes;
    cout << s << ' ' << t << '\n';
    return 0;
  }

  if (!a or b == 1 or k + 2 > a + b)
  {
    no;
    return 0;
  }

  swap(t[a + b - 1], t[b - 1]);
  if (k < a)
    swap(s[a + b - k - 1], s[b - 1]);
  else if (k > a)
  {
    k -= a;
    swap(t[b - k - 1], t[b - 1]);
  }

  yes;
  cout << s << '\n' << t << '\n';

  return 0;
}