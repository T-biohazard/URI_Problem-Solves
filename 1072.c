#include <stdio.h>
int main()
{
    int x, a, b;
    int i = 0;
    int o = 0;
    scanf("%d", &x);
    for(b= 0;b< x;b++)
    {
        scanf("%d", &a);
        if(a >= 10 && a <= 20){
            i++;
        }else{
            o++;
        }
    }
    printf("%d in\n",i);
    printf("%d out\n",o);
    return 0;
}
