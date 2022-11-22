#include <stdio.h>

int main(){
  int n;

  printf("Informe um valor inteiro: ");
  scanf("%d", &n);

  switch (n%2){
    case 0 :
    printf("Esse valor é um numero par.\n");
    break;

    default :
    printf("Esse valor é um numero impar.\n");
  }

  return 0;
}
