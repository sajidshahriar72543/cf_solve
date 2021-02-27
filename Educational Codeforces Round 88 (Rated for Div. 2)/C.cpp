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

double absl(double a, double b)
{
    return max(a, b) - min(a, b);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tt, c, h, t, x, sum, res;
    double avg, dis, m;

    cin >> tt;

    while(tt--)
    {
        cin >> h >> c >> t;

        avg = 0; x = 0; sum = 0;
        m = h * c * 1.0;
        res = 0;
        double tt = t * 1.0;

        lop(20000)
        {
            if(x % 2 == 0) {
                x++;
                sum += h;
                avg = sum / (x * 1.0);
            }
            else
            {
                x++;
                sum += c;
                avg = sum / (x * 1.0);
            }

            dis = absl(tt, avg);

            if(dis < m) {
                res = x;
                m = dis;
            }
           // cout << "dis = " << dis << " avg = " << avg << " t = " << tt << '\n';
        }

        cout << res << '\n';
    }



    return 0;
}

