#include<stdio.h>
#include<math.h>
int main()
{
    double X,Y,A,B,C,D;
    scanf("%lf %lf %lf",&A,&B,&C);
    D=(B*B)-(4*A*C);
    if(D<0){
            printf("Impossivel calcular\n");
    }
    else if(A==0){
            printf("Impossivel calcular\n");
    }
    else{
               X=(-B+sqrt(D))/(A+A);
               Y=(-B-sqrt(D))/(A+A);
              printf("R1 = %.5lf\n",X);
              printf("R2 = %.5lf\n",Y);
    }
    return 0;
}
