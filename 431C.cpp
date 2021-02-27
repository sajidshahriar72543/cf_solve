#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define mem0(a) memset(a, 0, sizeof a)
#define mem1(a) memset(a, -1, sizeof a)

const ll N = 1e2 + 5, mod = 1e9 + 7, inf = 1LL << 58;
int n, k, d;
ll way[N][2];

ll f(int s, int flag)
{
    if (s < 0)
        return 0;
    if (s == 0)
        return flag;

    ll &x = way[s][flag];
    if (x != -1)
        return x;

    x = 0;
    for (int i = 1; i <= k; i++)
    {
        x += f(s - i, flag | (i >= d));
        x %= mod;
    }

    return x;
}


int main()
{

    cin >> n >> k >> d;

    mem1(way);

    cout << f(n, 0) << '\n';

    return 0;
}

