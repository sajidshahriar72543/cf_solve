
/**Hey, What's up?*/

#include<bits/stdc++.h>
#pragma GCC optimize("O3,no-stack-protector,unroll-loops,fast-math")
using namespace std;
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
vector<long long>v;
long long mn[200005], mx[200005];
int main()
{
  fastio;
  long long a = 0, b = 0, c, d, e, f = 0, l, g, m, n, k, i, j, t, p, q;
  cin >> t;
  while (t--)
  {

    v.clear();
    cin >> n >> k;
    for (i = 0; i < n; i++)
    {
      mn[i] = INT_MAX;
      cin >> a;
      v.push_back(a);
    }
    mn[0] = v[0];
    mx[0] = v[0];
    f = 1;
    for (i = 1; i < n; i++)
    {
      mn[i] = max(v[i], mn[i - 1] - k + 1);
      if (mn[i] > v[i] + k - 1)
        f = 0;
      mx[i] = mx[i - 1] + k - 1;
      mx[i] = min(mx[i], v[i] + k - 1);
      if (mx[i] < v[i])
        f = 0;
    }
    if (!f || v[n - 1] != mn[n - 1])
      cout << "No\n";
    else
      cout << "Yes\n";
  }
  return 0;
}
