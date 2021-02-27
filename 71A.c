#include<stdio.h>
#include<string.h>

int main()
{
    int n, i, j, l;
    char word[101];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf(" %s", word);
        l = strlen(word);
        if(l <= 10)
            printf("%s\n", word);
        else {
            j = 1;
            while(j < l - 2)
                j++;
            printf("%c%d%c\n", word[0], j, word[l - 1]);
        }
    }

    return 0;
}
