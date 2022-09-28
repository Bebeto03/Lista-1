//Escreva um programa que calcule e apresente o valor do volume de uma caixa retangular utilizando a fórmula volume = comprimento*laargura*altura

#include <stdio.h>
int main(){
  double com, lar, alt, vol;

  printf("Informe o comprimento da caixa: ");
  scanf("%lf", &com);

  printf("Informe a largura da caixa: ");
  scanf("%lf", &lar);

  printf("Informe a altura da caixa: ");
  scanf("%lf", &alt);

  if (com > 0 && lar > 0 && alt > 0){
    vol = com * lar * alt;
    printf("Volume da caixa: %.1lf", vol);
  }else
    printf("Não é possível realizar esse cálculo");
  
  return 0;
}
