#include<bits/stdc++.h>

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair

#define scan(a) scanf("%d", &a)
#define scanl(a) scanf("%lld", &a)
#define scand(a) scanf("%lf", &a)
#define scan2(a, b) scanf("%d %d", &a, &b)
#define scanl2(a, b) scanf("%lld %lld", &a, &b)
#define scand2(a, b) scanf("%lf %lf", &a, &b)

#define yes printf("yes\n")
#define no printf("no\n")
#define Case(i) printf("Case %d: \n", int(i))

#define lop(n) for(int i = 0; i < n; i++)
#define lopj(n) for(int j = 0; j < n; j++)
#define lopr(a, n) for(int i = a; i < n; i++)
#define all(x) x.begin(), x.end()

#define vi vector <int>
#define vll vector <ll>
#define vst vector <string>
#define pii pair <int, int>
#define pll pair <ll, ll>
#define pss pair <string, string>

#define fread freopen("input.txt", "r", stdin)
#define fwrite freopen("output.txt", "w", stdout)
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

#define mod 1000000007
#define PI acos(-1.0)
#define inf 999999999999

using namespace std;

ll absl(ll a, ll b)
{
    if(a < b) return b - a;

    return a - b;
}

int main()
{
    fastio;

    ll tt, n;

    cin >> tt;

    while(tt--)
    {
        cin >> n;

        ll a[n];

        lop(n) cin >> a[i];

        vi v;

        for(ll i = 0; i < n; i++)
        {
            v.pb(a[i]);

            if(i == n - 1) break;

            bool f = 0;
            ll s = 0;
            for(ll j = i + 1; j < n; j++)
            {
                ll x = absl(a[i], a[j]);
                s += absl(a[j - 1], a[j]);

                //printf("i = %lld j = %lld x = %lld s = %lld\n",i,j,x,s);

                if(x < s) {
                    i = j - 2;
                    break;
                }

                if(j == n -1 and x >= s) {
                    f = 1;
                    v.pb(a[j]);
                    break;
                }
            }
            //printf("final i = %lld\n", i);

            if(f == 1) break;
        }

        int xx = v.size();
        cout << xx << '\n';

        lop(xx) cout << v[i] << ' ';

        cout << '\n';
    }



    return 0;
}

