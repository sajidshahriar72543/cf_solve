#include<stdio.h>

int main()
{
    int year, i, a, b, c, d, m, result;

    scanf("%d", &year);

    for(i = year + 1; ; i++)
    {
        m = i;

        a = m % 10;
        m /= 10;

        b = m % 10;
        m /= 10;

        c = m % 10;
        m /= 10;

        d = m % 10;
        m /= 10;

        if(a != b && b != c && c != d && a != c && a != d && b != d) {
            result = i;
            break;
        }
    }

    printf("%d\n", result);

    return 0;
}
