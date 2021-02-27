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
#define lopr(a, n) for(int i = 0; i < n; i++)
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

    ll tt, n, k, res;

    cin >> tt;

    while(tt--)
    {
        cin >> n >> k;

        int c = 0;

        if(n < k) swap(n, k);

        if(n == k) {
            cout << 0 << '\n';
            continue;
        }

        if(n % 2 and n % 4 and n % 8) {
            cout << -1 <<'\n';
            continue;
        }

        while(1) {
            if(n % 8 == 0 and n / 8 >= k) {
                n = (n >> 3);
                c++;
            }
            else break;
        }

        while(1)
        {
            if(n % 4 == 0 and n / 4 >= k) {
                n = (n >> 2);
                c++;
            }
            else break;
        }

        while(1)
        {
            if(n % 2 == 0 and n / 2 >= k) {
                n = (n >> 1);
                c++;
            }
            else break;
        }

        cout << (n == k ? c : -1) << '\n';
    }



    return 0;
}
