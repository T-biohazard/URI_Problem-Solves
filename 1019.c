#include <stdio.h>

int main()
{
 int t;
 scanf("%d", &t);
 int h = t / 3600;
 t = t - (h * 3600);
 int m = t / 60;
 t = t - (m * 60);
 printf("%d:%d:%d\n", h, m, t);
 return 0;
}
