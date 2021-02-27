#include<bits/stdc++.h>

#define ll long long
#define scan(a) scanf("%d", &a)
#define scanl(a) scanf("%lld", &a)
#define scand(a) scanf("%lf", &a)
#define scan2(a, b) scanf("%d %d", &a, &b)
#define scanl2(a, b) scanf("%lld %lld", &a, &b)
#define scand2(a, b) scanf("%lf %lf", &a, &b)
#define lop(n) for(int i = 0; i < n; i++)
#define lop1(n) for(int i = 1; i <= n; i++)
#define lopj(n) for(int j = 0; j < n; j++)
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define all(x) x.begin(), x.end()
#define mod 1000000007
const long long inf = 999999999999;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tt, n;

    cin >> tt;

    while(tt--)
    {
        cin >> n;
        char ar[n][n];

        lop(n) lopj(n) cin >> ar[i][j];

        string s = "YES\n";

        lop(n) lopj(n) {
            if(i == n - 1 or j == n -1)
                continue;

            if(ar[i][j] == '1')
            {
                if(ar[i][j + 1] == '0' and ar[i + 1][j] == '0')
                    s = "NO\n";
            }
        }

        cout << s;
    }

    return 0;
}
