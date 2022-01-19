#include<stdio.h>
int main()
{
    int i,n;
    int N[10];
    scanf("%d",&n);
    for(i=0;i<10;i++){
    printf("N[%d] = %d\n",i,n);
    n+=n;
    }
    return 0;
}
