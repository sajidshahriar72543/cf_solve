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

    int tt, n;

    cin >> tt;

    while(tt--)
    {
        cin >> n;

        ll ara[n], ans = 1;

        lop(n) cin >> ara[i];

        sort(ara, ara + n);

        int ng = 0;
        lop(n) if(ara[i] < 0) ng++;

        if(ng <= 1)
        {
            loop(i, n - 5, n)
                ans *= ara[i];
        }

        else if(ng == n)
        {
            loop(i, n - 5, n)
                ans *= ara[i];
        }

        else if(ng == 2 or ng == 3)
        {
            int j = n - 1;
            for(; j >= n - 3; j--)
                ans *= ara[j];//, cout << ans << ' ';

            ll xx = max(ara[0] * ara[1], ara[j] * ara[j - 1]);
            ans *= xx;
        }

        else
        {
            ans *= ara[n - 1];
            ll ans2 = 1, ans3 = 1;

            int p = 0;
            for(int i = 0, j = n - 2; p < 2;)
            {
                if(ara[i] * ara[i + 1] > ara[j] * ara[j - 1])
                {
                    ans *= ara[i] * ara[i + 1];
                    i += 2;
                    p++;
                }

                else
                {
                    ans *= ara[j] * ara[j - 1];
                    j -= 2;
                    p++;
                }
               // cout << ans << ' ';
            }

            loop(i, n - 5, n)
                ans2 *= ara[i];
            lop(4)
                ans3 *= ara[i];
                ans3 *= ara[n - 1];

            ans = max({ans, ans2, ans3});
        }

        cout << ans << '\n';
    }



    return 0;
}

