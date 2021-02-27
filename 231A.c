#include<stdio.h>

int main()
{
    int test, solution[3], i, j, num, flag = 0;

    scanf("%d", &test);

    for(i = 0; i < test; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &solution[j]);
        }
        num = 0;
        for(j = 0; j < 3; j++){
            if(solution[j] == 1)
                num++;
        }
        if(num == 2 || num ==3)
            flag++;
    }

    printf("%d\n", flag);

    return 0;
}
