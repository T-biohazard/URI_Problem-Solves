#include<stdio.h>
int main()
{
    int x,y,z,i,j,k,l=0;
    scanf("%d %d %d",&x,&y,&z);
    i=x;
    j=y;
    k=z;
    if(x>y){
        l=x;
        x=y;
        y=l;
    }

    if(x>z){
        l=x;
        x=z;
        z=l;
    }

    if(y>z){
        l=y;
        y=z;
        z=l;
    }
    printf("%d\n%d\n%d\n",x,y,z);
    printf("\n%d\n%d\n%d\n",i,j,k);
    return 0;
}
