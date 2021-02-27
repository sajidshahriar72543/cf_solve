//#pragma GCC optimize("Ofast,unroll-loops")
//#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define N 1000006
#define ll long long

using namespace std;

bool mark[N];

void sieve()
{
    int i, j, limit = sqrt(N * 1.0);

    mark[0] = mark[1] = true;

    for(i = 4; i < N; i += 2)
        mark[i] = true;

    for(i = 3; i <= limit; i += 2)
    {
        if(!mark[i])
        {
            for(j = i * i; j < N; j += i * 2)
                mark[j] = true;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    sieve();

    ll t, n, x, p;

    scanf("%lld", &n);

    while(n--)
    {
        scanf("%lld", &x);

        p = sqrt(x * 1.0);

        if(p * p != x) {
            printf("NO\n");
            continue;
        }

        if(!mark[p])
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
