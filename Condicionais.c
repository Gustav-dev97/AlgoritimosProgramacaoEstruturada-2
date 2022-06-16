#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  float orcamento;
  printf("Digite o valor do orcamento para viagem \n");
  scanf("%f", &orcamento);

  if (orcamento >= 10000)
  {
    printf("\n Joao e maria possuem orcamento para uma viagem internacional, pois seu orcamento e de %0.2f", orcamento);
  }
  else
  {
    printf("\n Joao e Maria irao optar por uma viagem nacional, seu orcamento ficou em %0.2f", orcamento);
  }

  printf("\n");
  system("pause");
  return (0);
}