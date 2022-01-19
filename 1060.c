#include<stdio.h>
int main()
{
    int i,k=0;
    double n;
    for(i=1;i<=6;i++){
        scanf("%lf",&n);
        if(n>0){
        k++;
        }
    }
    printf("%d valores positivos\n",k);

    return 0;
}
