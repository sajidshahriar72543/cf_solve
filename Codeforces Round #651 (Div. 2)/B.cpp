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

    int tt, n;

    cin >> tt;

    vi odd, even;

    int a[2006];

    while(tt--)
    {
        cin >> n;

        lopr(1, (2 * n) + 1)
        {
            cin >> a[i];

            if(a[i] % 2)
                odd.pb(i);
            else
                even.pb(i);
        }

        //for(auto &z : even) cout << z << " ";

        int x = odd.size(), y = even.size();

        if(x % 2 == 0 and y % 2 == 0) {
            if(x > y) x-= 2;
            else y -= 2;
        }

        else {
            x--; y--;
        }

        //cout << x << " " << y;

        lop(x)
        {
            cout << odd[i] << " " << odd[i + 1] << '\n';
            i++;
        }

        lop(y)
        {
            cout << even[i] << " " << even[i + 1] << '\n';
            i++;
        }

        odd.clear();
        even.clear();
    }



    return 0;
}

