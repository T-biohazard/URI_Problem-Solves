#include<stdio.h>
int main()
{
    int i;
    double n;
    scanf("%lf",&n);
    for(i=0;i<100;i++){
        printf("N[%d] = %.4lf\n",i,n);
        n /= 2.0;
    }
    return 0;
}
