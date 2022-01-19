#include<stdio.h>
int main()
{
    int i;
    float k=0,j=1.0;
    for(i=1;i<=100;i++){
        k=k+(1/j);
        j++;
    }
    printf("%.2f\n",k);
    return 0;
}
