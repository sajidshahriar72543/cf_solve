#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<ll>
#define pb push_back
#define ff first
#define ss second
#define inf 2e18
#define ull unsigned long long
#define pi acos(-1.0)
#define mod 1000000007
#define lop0(n) for(ll i=0;i<n;i++)
#define lop(j,n) for(ll j=0;j<n;j++)
#define lop1(i,n) for(ll i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
ll Set(ll N, ll pos)
{
  return N = N | (1LL << pos);
}
ll reset(ll N, ll pos)
{
  return N = N & ~(1LL << pos);
}
bool check(ll N, ll pos)
{
  return (bool)(N & (1LL << pos));
}
ll dx[] = { 1, 0, -1, 0 };
ll dy[] = { 0, 1, 0, -1 };
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
ll vis[26];
int main()
{
  freopen("plants.in", "r", stdin);
  ll n;
  cin >> n;
  vi v1, v2;
  lop0(n)
  {
    ll a;
    cin >> a;
    v1.pb(a);
  }
  lop0(n)
  {
    ll a;
    cin >> a;
    v2.pb(a);
  }
  ll f = 0;
  ll mx = 0;
  lop0((ll)v1.size() - 1)
  {
    if (v1[i] > v1[i + 1] and v2[i] >= v2[i + 1])
    {
      f = 1;
      break;
    }
    if (v1[i] > v1[i + 1])
    {
      ll x = v1[i] - v1[i + 1];
      ll y = v2[i + 1] - v2[i];
      ll z = (x + y - 1) / y;
      mx = max(mx, z);
    }

  }
  if (f)
  {
    cout << -1 << endl;
    return 0;
  }
  lop0(v1.size())
  {
    v1[i] += (v2[i] * mx);
  }
  f = 0;
  for (ll i = 1; i < v1.size(); i++)
  {
    if (v1[i] < v1[i - 1]) f = 1;
  }
  if (f)
  {
    cout << -1 << endl;
    return 0;
  }
  else cout << mx << endl;

  return 0;
}