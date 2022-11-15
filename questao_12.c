#include <stdio.h>
int main(){
  int x , y;

  printf("Informe um valor: ");
  scanf("%d", &x);

  printf("Informe um segundo valor: ");
  scanf("%d", &y);

  printf("Soma: %d\n", x + y);
  printf("Produto: %d\n", x * y);
  printf("Diferença: %d\n", x - y);
  printf("Quociente: %d\n", x / y);
  printf("Resto: %d", x % y);

  return 0;
}
