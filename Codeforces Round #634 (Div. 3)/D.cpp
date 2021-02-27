#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, i, j;
    string a;
    int sud[9][9];

    scanf("%d", &t);

    while(t--)
    {
        for(i = 0; i < 9; i++)
        {
            cin >> a;
            for(j = 0; j < 9; j++)
                sud[i][j] = a[j] - '0';
        }

        sud[0][0] = sud[0][1];
        sud[1][3] = sud[1][4];
        sud[2][6] = sud[2][7];

        sud[3][1] = sud[3][2];
        sud[4][4] = sud[4][5];
        sud[5][7] = sud[5][8];

        sud[6][2] = sud[6][3];
        sud[7][5] = sud[7][6];
        sud[8][8] = sud[8][0];

        for(i = 0; i < 9; i++)
        {
            for(j = 0; j < 9; j++)
                printf("%d", sud[i][j]);
            printf("\n");
        }
    }

    return 0;
}
