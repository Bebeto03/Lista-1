//Escreva um programa que pegue o valor de uma conta de restaurante e imprima o valor total a ser pago, considerando que o restaurante cobra 10% de taxa para o garçom.

#include <stdio.h>
int main(){
  double x, y;
  
  printf("Informe o valor da conta: R$");
  scanf("%lf", &x);

  y = x + ((10*x)/100);

  printf("Valor a ser pago: R$%.2lf", y);
  

  return 0;
}
