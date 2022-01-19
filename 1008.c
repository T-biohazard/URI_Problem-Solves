#include<stdio.h>
int main()
{
    int A,B,NUMBER;
    float C;
    double SALARY;
    scanf("%d", &NUMBER);
    scanf("%d", &B);
    scanf("%f", &C);
    SALARY =B*C;
    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %.2lf\n",SALARY);
    return 0;
}
