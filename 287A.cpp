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

#define yes             cout << "YES\n"
#define no              cout << "NO\n"
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
#define inf             (1 << 61)
#define N               (const int) 1e6+5


using namespace std;
using namespace chrono;


int dr[] = {0, 1, 0, 1};
int dc[] = {0, 0, 1, 1};

int main()
{
#ifdef LOCAL
    auto start = high_resolution_clock::now();
#endif // LOCAL

    fastio;

    char grid[4][4];
    int h, d;
    bool f = 0;

    lop(4) lopj(4) cin >> grid[i][j];

    lop(3)
    {
        lopj(3)
        {
            h = d = 0;
            loop(k, 0, 4)
            {
                h += grid[i + dr[k]][j + dc[k]] == '#';
                d += grid[i + dr[k]][j + dc[k]] == '.';
            }

            if(h == 3 or d == 3 or h == 4 or d == 4)
                f = 1;

            if(f) break;
        }

        if(f) break;
    }

    if(f) yes;
    else no;

#ifdef LOCAL
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
#endif // LOCAL

    return 0;
}
