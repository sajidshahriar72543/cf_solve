#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)

ll solve();

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x, test;

    cin >> test;

    while (test--)
    {
        cout << solve() << '\n';
    }

    return 0;
}

ll solve()
{
    int n;
    cin >> n;
    ll a[n];
    lop(n) cin >> a[i];

    ll dis = 0, tmp;
    lop(n - 1) dis += abs(a[i] - a[i + 1]);
    ll ans = dis;

    lop(n)
    {
        if (i == 0)
        {
            tmp = dis - abs(a[0] - a[1]);
            ans = min(ans, tmp);
        }
        else if (n == i + 1)
        {
            tmp = dis - abs(a[i] - a[i - 1]);
            ans = min(ans, tmp);
        }
        else
        {
            tmp = dis - abs(a[i] - a[i - 1]) - abs(a[i] - a[i + 1]) + abs(a[i - 1] - a[i + 1]);
            ans = min(ans, tmp);
        }
    }

    return ans;
}