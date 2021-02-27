#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll t, n, i, x;

    scanf("%lld", &t);

    while(t--)
    {
        scanf("%lld", &n);

        if(n == 1) {
            printf("1\n");
            continue;
        }

        printf("%lld\n", n);
    }

    return 0;
}
