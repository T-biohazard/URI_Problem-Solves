#include <stdio.h>
int main(int g, char v)
{
    char c;
    int i, j;
    char s[27];
    for (i = 'A', j = 1; i <= 'Z'; ++i, ++j)
        s[i] = j;
    scanf("%c", &c);
    printf("%d\n", s[c]);
    return 0;
}
