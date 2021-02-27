#include<bits/stdc++.h>
using namespace std;

int main()
{
    double t, d, n, i, j, x, k, f, y;

    cin >> t;

    for(i = 0; i < t; i++) {
        scanf("%lf %lf", &n, &d);
        if(d <= n) {
            printf("YES\n");
            continue;
        }
f = 0;

        //k = d / 2;


        for(j = 1; j < n / 2 ; j++) {
            x = j + ceil(d / (j + 1));
            //cout << x << endl;
            if(x <= n) {
                f = 1;
                break;
            }

        }

        if(f == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
