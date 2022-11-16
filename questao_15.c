#include <stdio.h>

int main(){
    int dias;
    float valor, valor1, valor2;

    printf("Informe quantos dias o empregado trabalhou: ");
    scanf("%d", &dias);

    valor = dias * 50.25;
    valor1 = valor + (valor/5);
    valor2 = valor + ((3*valor)/10);

    if (dias <= 10 ){
        printf("Não possui direito à gratificação.\n");
        printf("Valor bruto: R$%.2f\n", valor);
        printf("Valor a receber: R$%.2f\n", valor - (valor/10));
        }else if (dias <= 20){
            printf("Possui direito à gratificação de 20%.\n");
            printf("Valor bruto: R$%.2f\n", valor1);
            printf("Valor a receber: R$%.2f\n", valor1 - (valor1/10));
            }else{
              printf("Possui direito à gratificação de 30%.\n");
              printf("Valor bruto: R$%.2f\n", valor2);
              printf("Valor à receber: R$%.2f", valor2 - (valor2/10));
              }
    return 0;
}