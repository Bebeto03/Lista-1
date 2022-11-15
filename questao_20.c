#include <stdio.h>
#include <math.h>

int main(){
  int x1, x2, y1, y2;
  double d;

  printf("Informe a coordenada x do primeiro ponto: ");
  scanf("%d", &x1);

  printf("Informe a coordenada y do primeiro ponto: ");
  scanf("%d", &y1);

  printf("Informe a coordenada x do segundo ponto: ");
  scanf("%d", &x2);

  printf("Informe a coordenada y do segundo ponto: ");
  scanf("%d", &y2);

  d = sqrt(pow((x1 - x2),2) + pow((y2 - y1),2));

  printf("Distância: %.1lf", d);

  return 0;
}
