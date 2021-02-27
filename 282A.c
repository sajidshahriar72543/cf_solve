#include<stdio.h>

int main()
{
    int n, i, value = 0;
    char val[3];
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%s", val);

        if(val[0] == '-')
            value--;
        else if(val[0] == '+')
            value++;
        else if(val[2] == '-')
            value--;
        else
            value++;
    }

    printf("%d\n", value);

    return 0;
}
