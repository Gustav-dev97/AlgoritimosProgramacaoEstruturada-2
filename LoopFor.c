#include <stdio.h>
#include <conio.h>
int main(void)
{
    int contador; // variável de controle do loop

    for (contador = 1; contador <= 10; contador++)
    // for(contador = 10; contador >= 1; contador--)
    {
        printf("%d ", contador);
    }

    getch();
    return (0);
}
