#include<bits/stdc++.h>

#define ll              long long
#define pb              push_back

#define yes             cout << "yes\n"
#define no              cout << "no\n"

#define lop(n)          for(int i = 1; i < n + 1; i++)
#define lopj(n)          for(int j = 1; j < n + 1; j++)
#define fastio          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

const int N = 1e6 + 9;
vector <int> lst[N], ans;
int a[N], b[N], c[N], cnt[N], cntb[N];

void solve()
{
  ans.clear();
  int n, m;
  cin >> n >> m;

  lop(n + 2) cnt[i] = cntb[i] = 0;

  lop(n) cin >> a[i];
  lop(n)
  {
    cin >> b[i];
    cntb[b[i]]++;
  }
  lop(m) cin >> c[i], cnt[c[i]]++;

  int x = n;
  lop(n) if (b[i] == c[m])
  {
    x = i;
    break;
  }

  lop(m)
  {
    int z = 0;
    for (int j = n; j; j--)
    {
      if (b[j] == c[i] and a[j] != b[j])
      {
        z = j;
        break;
      }
    }
    if (!z) z = x;
    a[z] = c[i];
    ans.pb(z);
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