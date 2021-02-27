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

void OJ()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //OJ();

    ll tt, n, m, x, y, sum;

    cin >> tt;

    while(tt--)
    {
        cin >> n >> m >> x >> y;

        string s;
        sum = 0;

        lop(n)
        {
            cin >> s;
            lopj(m) {
                if(s[j] == '*') continue;
                else {
                    if(j == m - 1 or s[j + 1] == '*') sum += x;
                    else if(s[j + 1] == '.') {
                        if(2 * x < y) sum += 2 * x;
                        else sum += y;
                        j++;
                    }
                }
            }
        }

        cout << sum << '\n';
    }



    return 0;
}

