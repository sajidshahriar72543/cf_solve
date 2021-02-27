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

  int n1, n2, n3;
  cin >> n1 >> n2 >> n3;

  ll a1[n1], a2[n2], a3[n3];
  lop(n1) cin >> a1[i];
  lop(n2) cin >> a2[i];
  lop(n3) cin >> a3[i];

  sort(a1, a1 + n1);
  sort(a2, a2 + n2);
  sort(a3, a3 + n3);

  vll a;
  ll s1 = accumulate(a1, a1 + n1, 0LL);
  ll s2 = accumulate(a2, a2 + n2, 0LL);
  ll s3 = accumulate(a3, a3 + n3, 0LL);

  a.pb(a1[0]), a.pb(a2[0]), a.pb(a3[0]);
  sort(all(a));

  ll s = s1 + s2 + s3;

  s -= 2 * min({s1, s2, s3, a[0] + a[1]});

  cout << s << '\n';

  return 0;
}