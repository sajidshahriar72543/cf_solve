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
    fastio;

    int tt, n;
    vi v1, v2;

    cin >> tt;

    while(tt--)
    {
        cin >> n;

        lop(n) {
            int x; cin >> x;
            v1.pb(x);
            //cout << v1[i] << ' ';
        }

        sort(all(v1));

        int res = -1;

        lopr(1, 2 * 1024)
        {
            lopj(n)
            {
                v2.pb(v1[j] ^ i);
                //cout << v2[j] << ' ';
            }

            sort(all(v2));

            if(v1 == v2) {
                res = i;
                break;
            }
            v2.clear();
        }

        cout << res << '\n';

        v1.clear(); v2.clear();
    }



    return 0;
}

