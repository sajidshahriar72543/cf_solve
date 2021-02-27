#include<stdio.h>

int main()
{
    int n, m, a, p;

    scanf("%d %d %d", &n, &m, &a);

    p = 144 / (a * a);

    printf("%d\n", n * m / p);

    return 0;
}
