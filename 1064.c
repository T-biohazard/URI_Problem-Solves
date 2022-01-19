#include<stdio.h>
int main()
{
    int i,k=0;
    double n,l=0,m=0;
    for(i=1;i<=6;i++){
        scanf("%lf",&n);
        if(n>0){
        m+=n;
        k++;
        }
    }
    l=m/k;
    printf("%d valores positivos\n",k);
        printf("%.1lf\n",l);
    return 0;
}
