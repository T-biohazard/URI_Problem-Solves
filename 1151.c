#include<stdio.h>
int main()
{
    int n,i,j[100];
    scanf("%d",&n);
    j[0]=0;
    j[1]=1;
    for(i=2;i<n;i++)
      j[i]=j[i-1]+j[i-2];
      printf("0");
      for(i=1;i<n;i++){
        printf(" %d",j[i]);
      }
      printf("\n");
      return 0;
}
