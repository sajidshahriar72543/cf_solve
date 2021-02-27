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
#define lopr(n, a)      for(int i = n; i >= a; i--)
#define loopr(j, b, a)  for(int j = b; j >= a; j--)

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
#define inf             (1 << 30)
#define N               (const int) 2e5+5


using namespace std;

bool a[N];
int n, dp[2][N];

int kill(int pos, bool f)
{
    if(pos == n)
        return 0;

    if(dp[f][pos] != -1)
        return dp[f][pos];

    int skip1, skip2;
    skip1 = skip2 = inf;

    if(!f)
    {
        skip1 = a[pos] + kill(pos + 1, !f);
        if(pos < n - 1)
            skip2 = a[pos] + a[pos + 1] + kill(pos + 2, !f);
    }

    else
    {
        skip1 = kill(pos + 1, !f);
        if(pos < n - 1)
            skip2 = kill(pos + 2, !f);
    }

    return dp[f][pos] = min(skip1, skip2);
}

int main()
{
    fastio;

    int tt;

    cin >> tt;

    while(tt--)
    {
        cin >> n;

        lop(n) cin >> a[i];
        lop(2) lopj(n) dp[i][j] = -1;

        bool f = 0;

        cout << kill(0, f) << '\n';
    }

    return 0;
}
