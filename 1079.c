#include<stdio.h>
int main()
{
    int i,x;
    scanf("%d",&x);
    float a,b,c,k;
    for(i=1;i<=x;i++){
    scanf("%f %f %f",&a,&b,&c);
    k=(2.0*a + 3.0*b + 5.0*c);
    printf("%.1f\n",k/10.0);
    }
    return 0;
}
