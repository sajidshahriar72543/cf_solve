#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, k, l, mat[5][5];

    for(k = 0; k < 5; k++) {
        for(l = 0; l < 5; l++)
            scanf("%d", &mat[k][l]);
    }

    k = 0;
    l = 0;

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(mat[i][j] == 1) {
                k = i;
                l = j;
                break;
            }
        }
        if(k == i && l == j)
                break;
    }
//printf("%d %d\n", i, j);
    printf("%d\n", abs(2 - l) + abs(2 - k));

    return 0;

}
