#include<stdio.h>
int main()
{
    double A,B,C,t,a,h,s,i,n;
    scanf("%lf %lf %lf",&A,&B,&C);
    t=0.5*A*C;
    a=3.14159*C*C;
    h=(C*(A+B))/2;
    s=B*B;
    i=A*B;
    printf("TRIANGULO: %.3lf\n",t);
    printf("CIRCULO: %.3lf\n",a);
    printf("TRAPEZIO: %.3lf\n",h);
    printf("QUADRADO: %.3lf\n",s);
    printf("RETANGULO: %.3lf\n",i);
    return 0;
}
