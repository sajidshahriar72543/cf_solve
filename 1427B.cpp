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
#define pii             pair <int, int>
#define pss             pair <string, string>
#define vpii            vector <pii>

#define fread           freopen("input.txt", "r", stdin)
#define fwrite          freopen("output.txt", "w", stdout)
#define fastio          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

#define mod             (const int) 1e9+7
#define PI              acos(-1.0)
#define inf             (1 << 61)
#define N               (const int) 1e5+9


using namespace std;

int calc(string s)
{
    int n = s.size(), x = 0;

    bool f = 0;
    lop(n)
    {
        if(s[i] == 'W')
        {
            if(!f) x++, f = 1;
            else x += 2;
        }

        else
            f = 0;
    }

    return x;
}

int dp[100005][4], k, n, wn[N], ls[N];
vin lp;

int f(int pp, int c, int t)
{
    if(pp >= lp.size() or c == k)
        return 0;

    int p = lp[pp];
    if(dp[p][t] != -1)
        return dp[p][t];

    int x = 0;

    /*if(ls[p] == 1)
    {
        int y = f(pp + 1, c, 0), z = 0;

        if(c + 1 <= k)
        { 
            z = f(pp + 1, c + 1, 1);
            z = max({z, f(pp + 1, c + 1, 2), f(pp + 1, c + 1, 3)});
            z += (wn[p + 1] * 2) + 1;
            if(p > 0) z++;
        }

        //cout << "yz " << p << ' ' <<  y << ' ' << z << endl;

        x = max(y, z);
    }

    else 
    {*/
        int a = f(pp + ls[p], c, 0), b = 0, cc = 0, d = 0;

        if(c + 1 <= k)
        {
            b = f(pp + ls[p], c + 1, 2);
            b += (wn[p + ls[p]] * 2) + 1;
            cc = f(pp + ls[p], c + 1, 1) + 1;
            if(p > 0) cc++;
        }
        
        if(c + ls[p] <= k)
        {
            d = f(pp + ls[p], c + ls[p], 3);
            d += b + 2;
            if(p > 0) d++;
        } 

        printf("abcd %d %d %d %d %d %d\n",p, c, a, b, cc, d);

        x = max({a, b, cc, d});
    //}

    return dp[p][t] = x;
}

int main()
{
    int test;
    string s;

    cin >> test;

    while(test--)
    {
        cin >> n >> k >> s;

        lp.clear();
        lop(n + 2) 
        {
            wn[i] = ls[i] = 0;
            dp[i][0] = dp[i][1] = dp[i][2] = dp[i][3] = -1;
        }

        if(k == 0)
        {
            cout << calc(s) << '\n';
            continue;
        }

        int l = 0;
        lop(n) if(s[i] == 'L') l++;
        if(l <= k)
        {
            lop(n) if(s[i] == 'L') s[i] = 'W';
            cout << calc(s) << '\n';
            continue;
        }

        int x = 0; l = 0;
        vpii pos;         

        for(int i = n - 1; i >= 0; i--)
        {
            if(s[i] == 'W')
            {
                x++;
                ls[i + 1] = l;
                l = 0;
            }
            else
            {
                if(x)
                    pos.pb({x, i});
                wn[i + 1] = x;
                x = 0;
                l++;
                lp.pb(i);
            }
        }

        if(x)
            pos.pb({x, 0});
        if(!wn[0])
            wn[0] = x;
        if(!ls[0])
            ls[0] = l;

        reverse(all(pos));
        reverse(all(lp));

        lop(n) cout << i << ' ' << wn[i] << ' ' << ls[i] << endl;

        int ans = f(0, 0, 0);
        ans += (wn[0] * 2) - 1;

        lop(n) lopj(4) printf("%d %d %d %d\n", dp[i][j]);

        cout << ans << '\n';    
    }

    return 0;
}
