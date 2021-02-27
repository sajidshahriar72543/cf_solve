#include<bits/stdc++.h>

#define pi acos(-1.0)

using namespace std;


int main()
{
    int tt, n;
    double x;

    cin >> tt;

    while(tt--)
    {
        cin >> n;

        x = pi / (2 * n * 1.0);

        printf("%.10lf\n", 1 / tan(x));
    }

    return 0;
}
