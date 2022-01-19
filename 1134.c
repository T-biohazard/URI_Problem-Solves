#include<stdio.h>
int main()
{
    int n,a=0,b=0,c=0;
    printf("MUITO OBRIGADO\n");
    while(1){
        scanf("%d",&n);
        if(n>0 && n<4){
            if(n==1)a++;
            else if(n==2)b++;
            else c++;
        }
        else if(n==4)break;
    }
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",b);
    printf("Diesel: %d\n",c);
    return 0;
}
