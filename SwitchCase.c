#include <stdio.h>
#include <conio.h>

int main(void)
{
    int valor;

    printf("Digite o codigo do aluno de 1 a 3: ");
    scanf("%d", &valor);

    switch (valor)
    {
    case 1:
        printf("Aluno Joao\n");
        break;

    case 2:
        printf("Aluna Maria\n");
        break;

    case 3:
        printf("Aluno Zezinho\n");
        break;

    default:
        printf("Codigo invalido!\n");
    }

    getch();
    return 0;
}
