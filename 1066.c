#include<stdio.h>
int main()
{
    int x,i,b=0,c=0,d=0,e=0;
    for(i=0;i<5;i++){
    scanf("%d",&x);
    if(x%2)
    b++;
    else
    c++;
    if(x>0)
    d++;
    else if(x<0)
    e++;
     }
    printf("%d valor(es) par(es)\n",c);
    printf("%d valor(es) impar(es)\n",b);
    printf("%d valor(es) positivo(s)\n",d);
    printf("%d valor(es) negativo(s)\n",e);
    return 0;
}
