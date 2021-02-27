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

int main()
{
    //fastio;

    ll n, x;

    cin >> n;

    ll a[n + 1];

    lopr(1, n + 1) cin >> a[i];

    ll l = 1, r = 1;

    bool f = 0, f2 = 0;
    int f3;

    lopr(1, n)
    {
        if(a[i] > a[i + 1] and f == 1) {
            no;
            return 0;
        }

        if(a[i] > a[i + 1])
        {
            if(f2 == 0) {
                l = i;
                f2 = 1;
            }
            r = i + 1;
        }

        if(f2 != 0 and a[i] < a[i + 1])
            f = 1;

        if(a[i] == a[i + 1])
        {
            x = 0;
            f3 = -1;

            for(int j = i + 1; j <= n; j++) {
                if(a[j] == a[i]) {
                    x++;
                    continue;
                }

                if(a[j] > a[i]) {
                    f3 = 0;
                    break;
                }

                else {
                    f3 = 1;
                    break;
                }
            }

            if(f2 == 1 and (f3 == 0 or f3 == -1))
                r = i + x;

            if(f3 == 1 and f2 == 0) {
                l = i;
                f2 = 1;
            }

            i += x - 1;
        }
    }

    if((r < n and a[l] > a[r + 1]) or (l > 1 and a[r] < a[l - 1])) {
        no;
        return 0;
    }

    yes;
    cout << l << " " << r << '\n';

    return 0;
}

