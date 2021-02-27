#include<stdio.h>

int main()
{
    int i, j, flag = 0;
    char str1[101], str2[101];

    gets(str1);
    gets(str2);

    for(i = 0; str1[i] != '\0'; i++) {
        if(str1[i] < 92)
            str1[i] += 32;
        if(str2[i] < 92)
            str2[i] += 32;
    }

    for(i = 0; str1[i] != '\0'; i++) {
        if(str1[i] == str2[i])
            flag = 0;
        else if(str1[i] > str2[i]) {
            flag = 1;
            break;
        }
        else {
            flag = -1;
            break;
        }
    }
    printf("%d\n", flag);
    //main();
    return 0;
}
