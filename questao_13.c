//Escreva um programa que leia duas variáveis A e B e efetue a troca de valores. O objetivo é que a variável A passe a conter o valor de B e a variável B passe a possuir o valor de A. Apresente aos valores após a efetivação do processamento da troca.

#include <stdio.h>
int main(){
  int a, b, c;

  printf("Informe o valor de A: ");
  scanf("%d", &a);

  printf("Informe o valor de B: ");
  scanf("%d", &b);

  c = a;
  a = b;
  b = c;
  
  printf("TROCA!\n");
  printf("A: %d\n", a);
  printf("B: %d\n", b);
  
  return 0;
}
