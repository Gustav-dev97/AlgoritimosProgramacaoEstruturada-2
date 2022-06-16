#include <stdio.h>
int main()
{
    int tabuada, variavel_contadora = 1, num;
    printf("Entre com um número: \n");
    scanf("%d", &num);
    while (variavel_contadora <= 10)
    {
        tabuada = num * variavel_contadora;
        printf("%d x %d = %d\n", num, variavel_contadora, tabuada);
        variavel_contadora++;
    }
    return 0;
}
