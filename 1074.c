#include<stdio.h>
int main()
{
    int i,n,m;
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&n);
         if(n==0){
            printf("NULL\n");
        }
        else if(n>0){
            if(n%2==0) {printf("EVEN POSITIVE\n");}
            else {printf("ODD POSITIVE\n");}
        }
        else if(n<0){
            if(n%2==0) {printf("EVEN NEGATIVE\n");}
            else {printf("ODD NEGATIVE\n");}
        }
    }
    return 0;
}
