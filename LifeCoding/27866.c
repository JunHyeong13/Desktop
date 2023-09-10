#include<stdio.h>

int main()
{
    char S[1001];
    int num;

    scanf("%s\n%d", S, &num);
    printf("%c\n", S[num-1]);
    return 0;
}