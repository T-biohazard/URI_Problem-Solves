#include <stdio.h>
int main(int g, char v)
{
    int c, a, b, x;
    scanf("%d %d %d", &c, &a, &b);
    x =c-a-b;
    if (x > a && x > b)
        printf("%d\n", x);
    else if (a > b && a > x)
        printf("%d\n", a);
    else
        printf("%d\n", b);
    return 0;
}
