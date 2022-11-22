#include <stdio.h>

int main(){
    int ht;
    float vha, per;

    printf("Informe o valor da hora aula: ");
    scanf("%f", &vha);

    printf("Informe o numero de horas trabalhadas no mes: ");
    scanf("%d", &ht);

    printf("Informe o percentual de desconto do INSS: ");
    scanf("%f", &per);
    printf("% \n");

    printf("Salario bruto: R$%.2f\n", vha * ht);
    printf("Salario liquido: R$%.2f\n", (100*(vha*ht)-per*(vha*ht))/100);

    return 0;
}
