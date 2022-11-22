#include <stdio.h>
#include <math.h>

int main(){
  int n;
  float x;

  printf("Informe o valor de x: ");
  scanf("%f", &x);

  printf("Informe o valor de n: ");
  scanf("%d", &n);

  printf("%f", x*pow(2,n));

  return 0;
}
