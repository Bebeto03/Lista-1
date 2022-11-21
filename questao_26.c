#include <stdio.h>
#include <math.h>

int main(){
  float x1, y1, x2, y2;

  printf("Informe as coordenadas do primeiro ponto:\n");
  
  printf("x: ");
  scanf("%f", &x1);
  printf("y: ");
  scanf("%f", &y1);

  printf("Informe as coordenadas do segundo ponto:\n");

  printf("x: ");
  scanf("%f", &x2);
  printf("y: ");
  scanf("%f", &y2);

  printf("A distância entre esses dois pontos no plano é de: %f", sqrt(pow(x2-x1,2.0)+pow(y2-y1,2.0)));

  return 0;
}
