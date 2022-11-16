//Faça um programa capaz de ler um valor real e escrevê-lo com apenas uma casa decimal.

#include <stdio.h>
int main(){
  double x;

  printf("Informe um valor real: ");
  scanf("%lf", &x);

  printf("%.1lf", x);

  return 0;
}
