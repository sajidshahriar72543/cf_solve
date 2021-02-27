#include<bits/stdc++.h>

#define pi acos(-1.0)

using namespace std;


int main()
{
    int tt, n;
    double x, y;

    cin >> tt;

    while(tt--)
    {
        cin >> n;

        x = cos(pi / (4 * n * 1.0));
        y = sin(pi / (2 * n * 1.0));

        printf("%.10lf\n", x / y);
    }

    return 0;
}

