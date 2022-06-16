#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N1, N2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &N1);
    printf("Digite o segundo numero: ");
    scanf("%d", &N2);

    if (N1 == N2)
    {
        printf("Os numeros sao iguais!");
    }
    else
    {
        printf("Os numeros sao diferentes!");
    }

    printf("\n");
    system("pause");
    return (0);
}
