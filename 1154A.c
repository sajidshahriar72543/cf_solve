#include<stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int l = a;

    l = (b > l ? b : l);
    l = (c > l ? c : l);
    l = (d > l ? d : l);

    int w = l - a, x = l - b, y = l - c, z = l - d;

    if(w != 0)
        printf("%d ", w);
    if(x != 0)
        printf("%d ", x);
    if(y != 0)
        printf("%d ", y);
    if(z != 0)
        printf("%d\n", z);


}
