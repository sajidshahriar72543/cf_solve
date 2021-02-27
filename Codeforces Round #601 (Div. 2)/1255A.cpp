#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n, a, b, i, s;

    scanf("%lld", &n);

    while(n--)
    {
        scanf("%lld %lld", &a, &b);

        if(a == b) {
            printf("0\n");
            continue;
        }

        long long x = abs(a - b);
        long long counter = x / 5;
        x = x % 5;
        if(x == 1 || x == 2)
            counter ++;
        else if(x == 3 || x == 4)
            counter += 2;

        printf("%lld\n", counter);
    }

    return 0;
}
