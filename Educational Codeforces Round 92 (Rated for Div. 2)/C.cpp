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
#define lopr(n)      for(int k = 0; k < n; k++)
#define lrev(n, a)      for(int i = n; i >= a; i--)

#define all(x)          x.begin(), x.end()
#define mem(a, b)       memset(a, b, sizeof(a))
#define Max(a, b)       a = max(a, b)
#define Min(a, b)       a = min(a, b)

#define vin             vector <int>
#define vll             vector <ll>
#define vst             vector <string>
#define pll             pair <int, int>
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
    //fastio;

    int tt, n;
    string s;

    cin >> tt;

    while(tt--)
    {
        vector <int> pos[10];
        int cnt[10] = {0};
        pll odev[10];

        cin >> s;
        n = s.size();

        lop(n) cnt[s[i] - '0']++, pos[s[i] - '0'].pb(i + 1);

        int ans = 0;

        lop(10) Max(ans, cnt[i]);

        //cout << "Max same element = " << ans << '\n';

        if(ans == n)
        {
            cout << 0 << '\n';
            continue;
        }

        lop(10)
        {
            if(!cnt[i]) continue;

            lopj(10)
            {
                if(i == j or !cnt[j]) continue;
                bool f = 0;
                int p = 0;

                //cout << i << ' ' << j << '\t';

                lopr(n)
                {
                    if((f and s[k] - '0' == j) or (!f and s[k] - '0' == i))
                        p++, f ^= 1;//, cout << s[k];
                }
                //cout << '\n';

                if(p % 2 == 0) Max(ans, p);
            }
        }

//        lop(10)
//        {
//            int saiz = pos[i].size(), x = 0, y = 0;
//            lopj(saiz)
//            {
//                x += pos[i][j] % 2 == 1;
//                y += pos[i][j] % 2 == 0;
//            }
//            odev[i] = mp(x, y);
//            //cout << i << ' ' << x << ' ' << y << '\n';
//        }
//
//        lop(10)
//        {
//            bool f = 0;
//            lopj(10)
//            {
//                if(i == j or odev[i].ff != odev[j].ss) continue;
//
//                f = 1;
//            }
//
//            if(f) Max(ans, 2 * odev[i].ff);
//
//            f = 0;
//            lopj(10)
//            {
//                if(i == j or odev[i].ss != odev[j].ff) continue;
//
//                f = 1;
//            }
//
//            if(f) Max(ans, 2 * odev[i].ss);
//        }

        cout << n - ans << '\n';
    }

    return 0;
}

