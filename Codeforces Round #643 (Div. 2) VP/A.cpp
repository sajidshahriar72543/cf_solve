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

using namespace std;

int mind(ll x)
{
    int p = 10;

    while(x)
    {
        p = min(p * 1LL, x % 10);
        x /= 10;
    }

    return p;
}

int maxd(ll x)
{
    int p = 0;

    while(x)
    {
        p = max(p * 1LL, x % 10);
        x /= 10;
    }

    return p;
}

int main()
{
    ll tt, n, k, minn, maxx;

    scanl(tt);

    while(tt--)
    {
        scanl2(n, k);

        lop(k - 1)
        {
            minn = mind(n);
            maxx = maxd(n);

            //cout << minn << maxx << endl;

            if(minn == 0) break;

            else n += (minn * maxx);
        }


        printf("%lld\n", n);
    }



    return 0;
}

