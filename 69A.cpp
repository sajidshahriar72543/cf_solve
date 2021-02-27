#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n, flag = 0;

    scanf("%d", &n);

    int v[n][3], sum[n];

    for(i = 0; i < n; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &v[i][j]);
            sum[j] = 0;
        }
    }

    for(j = 0; j < 3; j++) {
        for(i = 0; i < n; i++)
            sum[j] += v[i][j];
        //printf("%d ", sum[j]);
        if(sum[j] != 0)
            flag = 1;
    }

    if(flag == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
