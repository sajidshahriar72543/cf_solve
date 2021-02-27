
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

//#define mod             (const ll) 1e9+7
#define PI              acos(-1.0)
#define inf             (1 << 61)
//#define N               (const int) 1e6+5

using namespace std;

const ll mod = 1e9 + 7, N = 2e5 + 20;
ll c[N], sm[N];

//ll inv[1005];
//void imod()
//{
//    inv[1] = 1;
//    for (ll i = 2; i < 1005; i++)
//    {
//        ll z = ((mod / i) * inv[mod % i]) % mod;
//        z = (mod - z) % mod;
//        inv[i] = z;
//    }
//}

ll inv(ll a, ll b){
 return 1 < a ? b - inv(b % a, a) * b / a : 1;
}

ll ncr(ll n, ll r)
{
    if (r > n)
        return 0;

    if (r > n - r)
        r = n - r;

    ll ans = 1;
    for (ll i = 1; i <= r; i++)
    {
        ans = (ans * (n - r + i)) % mod;
        ans = (ans * inv(i, mod)) % mod;
    }

    return ans;
}

int main()
{
    fastio;

    int t;
    cin >> t;

    while(t--)
    {
        ll n, k;
        cin >> n >> k;

        ll a[n];
        lop(n) cin >> a[i];

        sort(a, a + n, greater <ll> ());

        ll p = a[k - 1], cn1 = 0, cn2 = 0;
        lop(n)
        {
            cn1 += a[i] == p;
            if(a[i] == p and i < k)
                cn2++;
        }

//        cout << cn1 << ' ' << cn2 << '\n';

        ll ans = ncr(cn1, cn2);

        cout << ans << '\n';
    }

    return 0;
}


