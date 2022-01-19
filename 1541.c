#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,n,m;
    while(scanf("%f",&a)!='0'){
        if(a==0)break;
        scanf("%f %f", &b, &c);
        n = (((a*b)/c)*100);
        m=sqrt(n);
        printf("%d\n",(int)m);
    }
    return 0;
}
