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
#define inf             (1 << 61)
#define N               (const int) 1e6+5

using namespace std;
using namespace chrono;

int main()
{
#ifndef ONLINE_JUDGE
    auto start = high_resolution_clock::now();
    //freopen("C:/Users/AL-RSFR/Desktop/input.txt", "r", stdin);
    //freopen("C:/Users/AL-RSFR/Desktop/output.txt", "w", stdout);
#endif

    fastio;

    int n, p, s, k;
    vector <int> v;

    cin >> n;
    int po[n + 1];
    p = s = 0;

    lop(2 * n)
    {
        char c; cin >> c;

        if (c == '+')
        {
            p++;
            v.clear();
        }

        else
        {
            int x; cin >> x;
            s++;
            v.pb(x);
            auto v2 = v;
            sorta(v2);
            if (s  > p or v2 != v or (p == n and s < x))
            {
                cout << "NO\n";
                return 0;
            }

            if (s == 1)
            {
                k = p;
                po[k++] = x;
                if (k > n) k = 1;
            }

            else
            {
                po[k++] = x;
                if (k > n) k = 1;
            }
        }
    }

    cout << "YES\n";
    loop(i, 1, n + 1) cout << po[i] << ' ';
    cout << '\n';

#ifndef ONLINE_JUDGE
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "\nTime: " << duration.count() << " ms" << endl;
#endif

    return 0;
}
