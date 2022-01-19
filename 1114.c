#include<stdio.h>
int main()
{
    int a;
    while(1){
      scanf("%d",&a);
    if(a==2002){
        printf("Acesso Permitido\n");
        break;
    }
    else{
        printf("Senha Invalida\n");
    }
    }
    return 0;
}
