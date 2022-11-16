// Fazer um programa para ler a altura (em metros) e o sexo de uma pessoa e calcular o seu peso ideal através da seguinte fórmula: 
//para homens: 72.7 * altura - 58 
//para mulheres: 62.1 * altura - 44.7

#include <stdio.h>
int main() {
  double ideal, altura;
  char sexo;

  printf("Informe seu sexo(M/F): ");
  scanf("%c", &sexo);

  printf("Informe sua altura (em metros): ");
  scanf("%lf", &altura);

  if (sexo == 'M') {
    ideal = 72.7 * altura - 58;
    printf("Seu peso ideal é: %.1lfkg", ideal);
  } else if (sexo == 'F') {
    ideal = 62.1 * altura - 44.7;
    printf("Seu peso ideal é: %.1lfkg", ideal);
  } else
    printf("ERRO!\n");

  return 0;
}
