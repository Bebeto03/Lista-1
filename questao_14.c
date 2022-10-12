#include <stdio.h> 
int main(){
  double C, F;

  printf("Informe a temperatura em celsius: ");
  scanf("%lf", &C);

  F = (9 * C + 160) / 5;

  printf("Conversão para fahrenheit: %.1lf", F);

  return 0;
}
