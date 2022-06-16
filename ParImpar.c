#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Digite um numero para identificar se e par ou impar, ou zero para sair: ");
        scanf("%d", &n);
        if (n % 2 == 1)
            printf("%d  e impar\n", n);
        else
            printf("%d  e par\n", n);
    } while (n != 0);
    return 0;
