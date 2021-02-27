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
#define lopr(a, n)      for(int k = a; k < n; k++)
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


using namespace std;


int main()
{
    fastio;

    int tt, n;
    string s, t;
    vin vs, vt;

    cin >> tt;

    while(tt--)
    {
        cin >> n >> s >> t;

        int ss, tt;

        lop(n - 1)
        {
            if(s[i] != s[i + 1]) {
                vs.pb(i + 1);
                if(s[i] == '0')
                    ss = 1;
                else ss = 0;
            }
        }

        int saiz1 = vs.size();
        if(saiz1 == 0)
            ss = s[0] - '0';

        lop(n - 1)
        {
            if(t[i] != t[i + 1]) {
                vt.pb(i + 1);
                if(t[i] == '0')
                    tt = 1;
                else tt = 0;
            }
        }

        int saiz2 = vt.size();
        if(saiz2 == 0)
            tt = t[0] - '0';

        if(ss != tt)
            vt.pb(n);

        reverse(all(vt));

        saiz1 = vs.size(), saiz2 = vt.size();

        cout << saiz1 + saiz2 << ' ';
        lop(saiz1) cout << vs[i] << ' ';
        lop(saiz2) cout << vt[i] << ' ';
        cout << '\n';

        vs.clear(); vt.clear();
    }

    return 0;
}

