#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

const int N = 3e5+5;
ll a[N], dp[2][N], x;

ll sol(int p, int f)
{
    if(p == x) return 0;

    if(dp[f][p] != -1) return dp[f][p];

    ll ans = sol(p + 1, f);

    if(!f) ans = max(ans, a[p] + sol(p + 1, !f));
    else ans = max(ans, -a[p] + sol(p + 1, !f));

    return dp[f][p] = ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int test, y;

    cin >> test;

    while(test--)
    {
        cin >> x >> y;

        lop(x) cin >> a[i];

        lop(x) dp[0][i] = dp[1][i] = -1;

        cout << sol(0, 0) << '\n';
    }

    return 0;
}


