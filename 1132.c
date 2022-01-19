#include<stdio.h>
int main()
{
    int i,n,m,l=0,s,k=0;
     scanf("%d %d",&n,&m);
        if(m<n){
            k=n;
            n=m;
            m=k;
        }
   for(i=n;i<=m;i++){
    if(i%13)
    l += i;
    }
    printf("%d\n",l);
    return 0;

}
