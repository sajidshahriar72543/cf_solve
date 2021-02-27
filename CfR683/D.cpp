#include<bits/stdc++.h>

using namespace std;

const int N = 5e3 + 5;
int dp[N][N], n, m, ans;
string a, b;

int f(int i, int j)
{
    if(i >= n or j >= m)
        return 0;

    int &ret = dp[i][j];

    if(ret != -1) return ret;

    if(a[i] == b[j])
        ret = max(ret, f(i + 1, j + 1)) + 2;
    else
        ret = max({ret, f(i, j + 1), f(i + 1, j)}) - 1;

    return ret = max(0, ret);
}

int main()
{
    cin >> n >> m >> a >> b;

//    for(int i = n - 1; i >= 0; i--)
//    {
//        for(int j = m - 1; j >= 0; j--)
//        {
//            dp[i][j] = max(dp[i][j], 0);
//
//            if(a[i] == b[j])
//                dp[i][j] = max(dp[i][j], dp[i + 1][j + 1]) + 2;
//            else
//                dp[i][j] = max({dp[i][j], dp[i + 1][j], dp[i][j + 1]}) - 1;
//
//            ans = max(ans, dp[i][j]);
//        }
//    }


    memset(dp, -1, sizeof dp);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            ans = max(ans, f(i, j));

    cout << ans << '\n';

    return 0;
}
