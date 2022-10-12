#include <stdio.h>
int main(){
  double cot, real;

  printf("Informe a cotação do dólar:R$");
  scanf("%lf", &cot);

  printf("Informe a quantidade que deseja converter:R$");
  scanf("%lf", &real);

  printf("Convertido: US$%.2lf", real/cot);

  return 0;
}
