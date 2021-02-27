#include<bits/stdc++.h>
using namespace std;

#define inf 999999999999

int main()
{
    long long t, n, s, k, i, j, inp, b1, b2;
    vector <long long> nm;

    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %lld %lld", &n, &s, &k);

        bool flag = true;

        for(i = 0; i < k; i++) {
            scanf("%lld", &inp);
            nm.push_back(inp);
            if(inp == s)
                flag = false;
        }

        if(flag) {
            printf("0\n");
            nm.clear();
            continue;
        }

        sort(nm.begin(), nm.end());

        j = lower_bound(nm.begin(), nm.end(), s) - nm.begin();
        //cout << "s="<<s<<" j="<<nm[j]<<" index="<<j<<endl;

        long long x = 0;
        b1 = b2 = inf;
        for(i = j; i >= 0; i--) {
            if(nm[j] - nm[i] == x + 1)
                x++;
            if(nm[j] - nm[i] > x + 1) {
                b1 = x + 1;
                //cout << "break\t" << nm[i] << " - " << nm[j] << " x = " << x << endl;
                break;
            }
            if(i == 0 && nm[i] > 1) {
                b1 = nm[j] - nm[i] + 1;
                //cout << "left maxed " << nm[i] << endl;
            }
        }

        x = 0;
        for(i = j; i < k; i++) {
            if(nm[i] - nm[j] == x + 1)
                x++;
            if(nm[i] - nm[j] > x + 1) {
                b2 = x + 1;
                //cout << "break\t" << nm[i] << " - " << nm[j] << " x = " << x << endl;
                break;
            }
            if(i == k - 1 && nm[i] < n) {
                b2 = x + 1;
                //cout << "right maxed " << nm[i] << endl;
            }
        }

        printf("%lld\n", min(b1, b2));
        //cout << "b1 " << b1 << " b2 " << b2 << endl;

        nm.clear();
    }

    return 0;
}
