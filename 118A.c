#include<stdio.h>
#include<string.h>

int main()
{
    int i, j, l;
    char str[101], str2[101];

    scanf(" %s", str);
    l = strlen(str);

    for(i = 0, j = 0; i < l; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        if(str[i] != 'A' && str[i] !='E' && str[i] !='I' && str[i] !='O' && str[i] !='U' && str[i] != 'Y'
           && str[i] !='a' && str[i] !='e' && str[i] !='i' && str[i] !='o' && str[i] !='u' && str[i] != 'y') {
            str2[j] = str[i];
            j++;
        }
    }
    str2[j] = '\0';

    for(i = 0; i < j; i ++) {
        printf(".%c", str2[i]);
    }

    printf("\n");

    return 0;
}
