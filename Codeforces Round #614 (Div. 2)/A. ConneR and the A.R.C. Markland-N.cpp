#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, s, k, i, j, inp, b1, b2;
    vector <bool> nm;

    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %lld %lld", &n, &s, &k);

        b1 =  b2 = 999999999999;
        for(i = 0; i <= n; i++){
            nm.push_back(1);
        }
        for(i = 0; i < k; i++) {
            scanf("%lld", &inp);
            nm[inp] = 0;
            //km.push_back(inp);
        }

        for(i = s; i > 0 ; i--) {
          if(nm[i] == 1) {
                b1 = s - i;
                break;
          }
        }
        for(j = s; j <= n; j++) {
          if(nm[j] == 1) {
                b2 = j - s;
                break;
          }
        }

        printf("%lld\n", min(b1, b2));
        nm.clear();
    }

    return 0;
}
