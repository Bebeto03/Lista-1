#include <stdio.h>
int main(){
  int hora, minuto, segundo, totals;

  printf("INFORME O HORÁRIO:\n");

  printf("horas: ");
  scanf("%d", &hora);

  printf("minutos: ");
  scanf("%d", &minuto);

  printf("segundos: ");
  scanf("%d", &segundo);

  totals = 3600 * hora + 60 * minuto + segundo;

  printf("Segundos totais: %d", totals);

  return 0;
}
