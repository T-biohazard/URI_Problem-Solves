#include <stdio.h>
int main()
{
    double a=0.0, M[12][12];
    char T[2];
    int n,x,y,z,p=11;
    scanf("%s", &T);
    for(x=0;x<=11;x++)
    {
        for(y=0; y<=11; y++)
            scanf("%lf", &M[x][y]);
    }
    for(z=1; z<=11;z++)
    {
        for(n=11;n>=p;n--)
            a+=M[z][n];
        p--;
    }
    if(T[0]=='S')
        printf("%.1lf\n",a);
    else if(T[0]=='M')
    {
        a=a/66.0;
        printf("%.1lf\n",a);
    }
    return 0;
}
