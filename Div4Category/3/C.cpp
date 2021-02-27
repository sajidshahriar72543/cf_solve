#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "YES\n"
#define no cout << "NO\n"

const int N = 1e5 + 5;
int cnt[N], n, a, b;
string state;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    double ans, w;
    cin >> n >> w;

    double a[2 * n];
    lop(2 * n) cin >> a[i];

    sort(a, a + (2 * n));

    double l = 0.0000001, h = min(a[0] * 2, a[n]), m;

    lop(50)
    {
        //m = (l + h) / 2;
        m = sqrt(l * h);

        ans = (double) n * m;
        ans += (double) n * (m / 2);

        if (ans == w) break;

        if (ans > w) h = m;
        else l = m;
    }

    cout << fixed << setprecision(10) << ans << '\n';

    return 0;
}