#include <stdio.h>
int main()
{
    int a,b,c=0,x,y;
    scanf("%d", &x);
    do{
        scanf("%d",&y);
    }
    while(x>=y);
    for(a=x,b=0; b<y; a++)
    {
        b+=a;
        c++;
    }
    printf("%d\n", c);
    return 0;
}
