#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    if(A==B){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if(B>A){
        printf("O JOGO DUROU %d HORA(S)\n",B-A);
    }
    else if(A>B){
        printf("O JOGO DUROU %d HORA(S)\n",((B+24)-A) );
    return 0;
}
}
