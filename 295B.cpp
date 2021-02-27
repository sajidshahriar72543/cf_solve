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
#define lopk(n)         for(int k = 0; k < n; k++)
#define lrev(n, a)      for(int i = n; i >= a; i--)

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
#define N               502

using namespace std;

ll weight[N][N], sum[N], dlt[N];
int n;

void floyd_warshall(int p);

int main()
{
    fastio;

    cin >> n;

    lop(n) lopj(n) cin >> weight[i][j];

    lop(n) cin >> dlt[i];

    lrev(n - 1, 0)
    {
        int x = dlt[i] - 1;
        floyd_warshall(i);

        sum[i] = 0;
        for(int k = i; k < n; k++)
            for(int j = i; j < n; j++) {
                int a = dlt[k] - 1, c = dlt[j] - 1;
                sum[i] += weight[a][c];
        }

    }

//    lop(n)
//    {
//        lopj(n) cout << weight[i][j] << '\t';
//        cout << endl;
//    }

    lop(n) cout << sum[i] << ' ';

    return 0;
}

void floyd_warshall(int p)
{
    //for(int k = p; k < n; k++) {
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++) {
                int k = dlt[p] - 1;//, b = dlt[i] - 1, c = dlt[j] - 1;
                weight[i][j] = min(weight[i][j], weight[i][k] + weight[k][j]);
            }
    //}
}
