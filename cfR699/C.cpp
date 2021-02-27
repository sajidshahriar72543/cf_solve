#include<bits/stdc++.h>

#define ll              long long
#define pb              push_back

#define yes             cout << "yes\n"
#define no              cout << "no\n"

#define lop(n)          for(int i = 1; i < n + 1; i++)
#define fastio          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

const int N = 1e5 + 9;
vector <int> lst[N], ans;
int a[N], b[N], c[N];

void solve()
{
  int n, m;
  cin >> n >> m;

  ans.clear();
  lop(n + 2) lst[i].clear();

  lop(n) cin >> a[i];
  lop(n)
  {
    cin >> b[i];

    if (a[i] != b[i])
      lst[b[i]].pb(i);
  }
  lop(m) cin >> c[i];

  int x = 0;
  if ((int) lst[c[m]].size())
  {
    x = lst[c[m]].back();
    lst[c[m]].pop_back();
  }
  else
  {
    lop(n) if (b[i] == c[m])
    {
      x = i;
      break;
    }
  }

  if (!x)
  {
    no;
    return ;
  }

  lop(m)
  {
    if ( (int) lst[c[i]].size() == 0)
    {
      ans.pb(x);
      a[x] = c[i];
    }
    else
    {
      int z = lst[c[i]].back();
      ans.pb(z);

      a[z] = c[i];
      lst[c[i]].pop_back();
    }
  }

  lop(n) if (a[i] != b[i])
  {
    no;
    return ;
  }

  yes;
  for (auto &z : ans) cout << z << ' ';
  cout << '\n';
}

int main()
{
  fastio;

  int tt;

  cin >> tt;

  while (tt--)
  {
    solve();
  }

  return 0;
}