#include <stdio.h>
int main()
{
  float compras, desconto, taxa, totpagar;

  compras = 3000; /* Modifique o valor da variavel compras e teste outras condições*/

  if (compras <= 2000)
  {
    taxa = 0.1;
  }
  else
  {
    if (compras <= 3000)
    { /* Nessa condição não é necessário por a condição de maior que 2000, pois nesse if já é maior que 2000*/
      taxa = 0.05;
    }
    else
    {
      if (compras <= 5000)
      { /* Nessa condição não é necessário por a condição de maior que 3000, pois nesse if já é maior que 3000*/
        taxa = 0.03;
      }
      else
      {
        taxa = 0.02; /* Nessa condição não é necessário por a condição de maior que 2000, pois nesse if já é maior que 2000*/
      }
    }
  }
  desconto = compras * taxa;
  totpagar = compras - desconto;
  printf("O seu desconto foi de %0.2f e voce ira pagar %0.2f reais.", desconto, totpagar);
}
