#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll tt, n, i, j, k, a, b;

    cin >> tt;

    while(tt--)
    {
        cin >> n;

        ll candy[n + 1], sum1[n + 1] = {0};

        for(i = 1; i <= n; i++) {
            cin >> candy[i];
            sum1[i] = sum1[i - 1] + candy[i];
        }

        ll aa = 0, bb = 0, a = 0, b = 0, x = 1, y = 0;

        for(i = 1, j = n; i <= j; )
        {
            //printf("f %lld %lld\n", i,  j);

            for(k = 0; k < j - i; k++) {
                a = sum1[i + k] - sum1[i - 1];
                if(a > b) {
                    i += k + 1;
                    aa = sum1[i - 1];
                    y++;
                    //printf("a = %lld k = %lld aa = %lld\n", a, k, aa);
                    break;
                }
            }

            if(a <= b) {
                i += k;
                aa = sum1[i];
                y++;
                break;
            }

            //printf("m %lld %lld\n", i, j);

            if(i > j) break;

            for(k = 0; k <= j - i; k++) {
                b = sum1[j] - sum1[j - k - 1];
                if(b > a) {
                    j -= (k + 1);
                    bb = sum1[n] - sum1[j];
                    y++;
                    //printf("b = %lld k = %lld bb = %lld\n", b, k, bb);
                    break;
                }
            }

            if(b <= a) {
                j -= k;
                bb = sum1[n] - sum1[j];
                y++;
                //printf("e %lld %lld\n\n", i, j);
                break;
            }

            //printf("e %lld %lld\n\n", i, j);
        }

        cout << y << " " << aa << " " << bb << '\n';
    }

    return 0;
}

