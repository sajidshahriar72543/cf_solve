#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

const int N = 3e4+5, P = 3e2+5;
int n, d;
int gem[N], dp[N][P], cnt[N];

int f(int pos, int l)
{
    if(pos > gem[n - 1])
        return 0;

    int x = l;
    if(x >= P)
        x -= (N - P);

    if(dp[pos][x] != -1)
        return dp[pos][x];

    int a = f(pos + l, l);
    int b = f(pos + l + 1, l + 1);
    int c = 0;
    if(l > 1)
        c = f(pos + l - 1, l - 1);

//    printf("%d %d\t %d %d\t %d %d\t %d %d\t %d\n", pos, l, pos + l, a, pos + l + 1, b, pos + l - 1, c, cnt[pos]);

    return dp[pos][x] = cnt[pos] + max({a, b, c});
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x, test;

    cin >> n >> d;

    lop(n) cin >> gem[i], cnt[gem[i]]++;

    memset(dp, -1, sizeof(dp));

    cout << f(d, d) << endl;

//    lop(n) cout << dp[gem[i]] << ' ';

    return 0;
}
