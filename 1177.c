#include<stdio.h>
int main()
{
    int i,j=0,n;
    int N[1000];
    scanf("%d",&n);
    for(i=0;i<1000;i++){
        printf("N[%d] = %d\n",i,j);
        j++;
        if(n==j)j=0;;
    }
    return 0;
}

