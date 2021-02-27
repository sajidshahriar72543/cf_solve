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
#define pll             pair <int, int>
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


int main()
{
    fastio;

    int tt, n;

    cin >> tt;

    while(tt--)
    {
        cin >> n;
        int a[n];
        map <int, int> c;

        lop(n)
        {
            cin >> a[i];
            c[a[i]]++;
        }

        if(c.size() == 1)
        {
            no;
            continue;
        }

        int x = c.begin() -> ss, y = c.begin() -> ff;
        for(auto it = c.begin(); it != c.end(); it++)
        {
            if(it -> ss < x)
            {
                x = it -> ss;
                y = it -> ff;
            }
        }

        //cout << x << ' ' << y << '\n';
        int p;
        yes;
        //lop(n) cout << a[i] << ' ';
        int f = 0;
        lop(n)
        {
            if(a[i] == y)
            {
                //cout << a[j] << ' ' << y << ' ';
                p = i;
                break;
            }
        }
        //cout << p << '\n';
        lopj(n)
            if(a[j] != y and j != p)
                cout << p + 1 << ' ' << j + 1 << '\n', f = j;

        loop(j, p + 1, n)
            if(a[j] == y)
                cout << f + 1 << ' ' << j + 1 << '\n';









        /*int z = 0;
        lop(n)
        {
            if(a[i] == y)
            {
                loop(j, z,n)
                {
                    z++;
                    if(a[j] != y and j != i)
                    {
                        cout << i + 1 << ' ' << j + 1 << '\n', k++;
                        break;
                    }
                }
            }
        }
        lop(x)
        {
            loop(j, p + 1, n)
            {
                if(a[j] == y)
                {
                    //cout << a[j] << ' ' << y << ' ';
                    p = j;
                    break;
                }
            }
            //cout << p << '\n';
            lopj(n)
            {
                if(k == n - 1)
                {
                    f = 1;
                    break;
                }
                if(a[j] != y and j != p)
                    cout << p + 1 << ' ' << j + 1 << '\n', k++;
            }
            if(f) break;
        }

        /*map <pll, int> v;
        vpll r;

        lop(n - 1)
        {
            lopj(n)
            {
                if(i == j) continue;

                if(a[i] != a[j] and v[{a[j], a[i]}] == 0)
                {
                       r.pb({i + 1, j + 1});
                       v[{a[i], a[j]}] = 1;
                       break;
                }
            }
        }

        yes;
        lop(r.size())
        {
            cout << r[i].ff << ' ' << r[i].ss << '\n';
        }*/
    }

    return 0;
}
