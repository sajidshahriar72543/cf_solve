#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define lopr(b) for(int i = b - 1; i >= 0; i--)

const int N = 1e5 + 5;

int flag[N], n;
ll l;

bool bs(double t)
{
    int s = 1;
    double tt = 0.0, p = 0.0, pp;

    lop(n)
    {
        if(tt >= t)
            break;

        int d = flag[i] - p;
        double T = (double) d / s;

        if(tt + T > t)
        {
            double ft = t - tt;
            double fd = s * ft;

            p += fd;
            tt += ft;
        }

        else 
            tt += T, p = flag[i];
        s++;
    }

    double ft = t - tt;
    double fd = s * ft;
    p += fd;

    s = 1;
    tt = 0.0, pp = l * 1.0;


    lopr(n)
    {
        if(tt >= t)
            break;

        int d = pp - flag[i];
        double T = (double) d / s;

        if(tt + T > t)
        {
            double ft = t - tt;
            double fd = s * ft;

            pp -= fd;
            tt += ft;
        }

        else 
            tt += T, pp = flag[i];
        s++;
    }

    ft = t - tt;
    fd = s * ft;
    pp -= fd;

    return p < pp;
}
int main()
{
    int test;

    cin >> test;

    while(test--)
    {
        cin >> n >> l;

        lop(n) cin >> flag[i];

        double lo = 0, hi = l * 1.0;

        int k = 50;

        while(k--)
        {
            double mid = (lo + hi) / 2;

            if(bs(mid))
                lo = mid;
            else
                hi = mid;
        }

        printf("%.8lf\n", lo);;
    }

    return 0;
}
