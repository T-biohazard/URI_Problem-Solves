#include<stdio.h>
int main()
{
    char A ;
    double B,C,TOTAL;
    scanf("%s", &A);
    scanf("%lf",&B);
    scanf("%lf",&C);
    TOTAL = B+(C*0.15);
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}
