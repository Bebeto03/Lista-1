#include <stdio.h>
#include <math.h>

int main(){
  float n1, n2, n3;

  printf("Informe um número: ");
  scanf("%f", &n1);

  printf("Informe outro número: ");
  scanf("%f", &n2);

  printf("Informe outro número: ");
  scanf("%f", &n3);

  printf("Média aritmética: %f\n", (n1 + n2 + n3)/3);

  printf("Média geométrica: %f\n", pow(n1*n2*n3, 1.0/3.0));

  return 0;
}
