#include<stdio.h>
int main()
{
    int x,y,z,i;
    scanf("%d %d",&x,&y);
    if(x>y){
        z=x;
        x=y;
        y=z;
    }
    x++;
    for(i=x;i<=y;i++){
        if(i%5==2 || i%5==3)
            printf("%d\n",i);
    }
    return 0;
}
