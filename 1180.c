#include <stdio.h>
int main()
{
   int a,b,c,d,e,N, p, m;
    scanf("%d", &N);
    int T[N];
    for(a=0; a<N; a++)
        scanf("%d", &T[a]);
    m=T[0];
    for(a=1; a<N; a++)
    {
        if(m>T[a])
        {
            m=T[a];
            p=a;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", m, p);
    return 0;
}
