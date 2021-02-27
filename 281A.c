#include<stdio.h>

int main()
{
    char word[1002];

    gets(word);

    if(word[0] >= 'a')
        word[0] = 'A' + word[0] - 'a';

    puts(word);

    return 0;
}
