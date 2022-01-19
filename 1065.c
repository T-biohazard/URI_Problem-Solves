#include<stdio.h>
int main()
{
    int i,k=0,n;
    for(i=1;i<=5;i++){
        scanf("%d",&n);
        if(n%2==0){
        k++;
        }
    }
    printf("%d valores pares\n",k);
    return 0;
}
