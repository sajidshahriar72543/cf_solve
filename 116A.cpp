#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, total = 0, maxim = 0;

    scanf("%d", &n);

    int leave[n], enter[n];

    for(int i = 0; i < n; i++) {
        scanf("%d %d", &leave[i], &enter[i]);

        total += enter[i] - leave[i];

        if(maxim < total)
            maxim = total;
    }
    printf("%d\n", maxim);

    return 0;
}
