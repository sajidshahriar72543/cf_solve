
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
#define pll             pair <ll, ll>
#define pss             pair <string, string>
#define vpll            vector <pll>

#define fread           freopen("input.txt", "r", stdin)
#define fwrite          freopen("output.txt", "w", stdout)
#define fastio          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

#define mod             (const int) 1e9+7
#define PI              acos(-1.0)
#define inf             (1LL << 61)
#define N               (const int) 1e6+5

using namespace std;

int main()
{
    fastio;

    int t;
    cin >> t;

    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        ll a[n], b[n];
        vll one, two;
        lop(n) cin >> a[i];
        lop(n) cin >> b[i];

        lop(n)
        {
            if (b[i] == 1)
                one.pb(a[i]);
            else
                two.pb(a[i]);
        }

        sortd(one); sortd(two);

        ll ans = inf;
        ll sz1 = one.size(), sz2 = two.size();
        ll pre1[sz1 + 1], pre2[sz2 + 1];
        pre1[0] = pre2[0] = 0;

        lop(sz1) pre1[i + 1] = pre1[i] + one[i];
        lop(sz2) pre2[i + 1] = pre2[i] + two[i];

        lop(sz2 + 1)
        {
            ll x = pre2[i];
            ll j = lower_bound(pre1, pre1 + sz1 + 1, m - x) - pre1;
            j = min(j, sz1);
            ll y = pre1[j];
            // cout << i << ' ' << x << ' ' << j << ' ' << y << '\n';
            if (x + y >= m)
                ans = min(ans, 2LL * i + j);
        }


        cout << (ans == inf ? -1 : ans) << '\n';
    }

    return 0;
}


14