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
#define loop(j, a, b)   for(int j = a; j < b; j++)
#define lopr(n, a)      for(int i = n; i >= a; i--)
#define loopr(j, b, a)  for(int j = b; j >= a; j--)

#define all(x)          x.begin(), x.end()
#define mem(a, b)       memset(a, b, sizeof(a))

#define vin             vector <int>
#define vll             vector <ll>
#define vst             vector <string>
#define pll             pair <ll, ll>
#define pss             pair <string, string>
#define vpll            vector <pll>

#define fread           freopen("input.txt", "r", stdin)
#define fwrite          freopen("output.txt", "w", stdout)
#define fastio          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

#define mod             1000000007
#define PI              acos(-1.0)
#define inf             999999999999


using namespace std;


int main()
{
    fastio;

    int n, k, p;

    cin >> n >> k;

    vin a(k), b;

    lop(k) cin >> a[i];

    b = a, p = n;
    int mx = 0;

    sort(all(b), greater <int> ());

    int i = 0;
    while(i < k and p--)
    {
        mx += b[i], b[i]--;

//        if(i < k - 1 and b[i] < b[i + 1])
//            i++;
//
//        if(i == k - 1 and b[i] < b[0])
//            i = 0;

        i = max_element(all(b)) - b.begin();
    }

    b = a, p = n;
    int  mn = 0;

    sort(all(b));

    for(int i = 0; i < k and p; i++)
    {
        int x = min(p, b[i]);
        p -= x;

        loop(j, 0, x)
        mn += b[i], b[i] --;
    }

    cout << mx << ' ' << mn << '\n';

    return 0;
}
