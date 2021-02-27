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

#define mod             (const int) 1e9+7
#define PI              acos(-1.0)
#define inf             (1 << 61)
#define N               (const int) 1e6+5


#define close(x) cout << x << '\n'; continue;

using namespace std;


int main()
{
    fastio;

    int tt, n, k;

    cin >> tt;

    while(tt--)
    {
        cin >> n >> k;

        int a[n], unq = 1, s[n];

        lop(n)
        {
            cin >> a[i];
            s[i] = a[i];

            if(i and a[i] != a[i - 1])
                unq++;
        }

        if(unq <= k)
        {
            close(1);
        }

        int b[105][105], ans = 1, p, q;

        while(1)
        {
            p = k;
            lop(n)
            {
                if(p)
                {
                    b[ans][i] = s[i];
                    q = s[i];
                    s[i] = 0;

                    if(!i or (i and b[ans][i] != b[ans][i - 1]))
                        p--;
                }

                else
                {
                    b[ans][i] = q;
                    s[i] -= q;
                }

                //cout << b[ans][i] << ' ';
            }

            if(count(s, s + n, 0) == n)
                break;

            ans++;

            //cout << ans << '\n';

            if(ans > 101)
            {
                ans = -1;
                break;
            }
        }



        cout << ans << '\n';
    }

    return 0;
}
