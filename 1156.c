#include<stdio.h>
int main()
{
    int i;
    float j=0,k = 1.0;
    for(i=1;i<=39;i+=2){
        j += (i/k);
        k = k+k;
    }
    printf("%.2f\n",j);
    return 0;
}
