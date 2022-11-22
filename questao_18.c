#include <stdio.h>

int main(){
    float raio;
    
    printf("CIRCULO:\n");

    printf("Informe o valor do raio: ");
    scanf("%f", &raio);

    printf("Diametro: %f\n", 2*raio);
    printf("Circunferencia: %f\n", 2*raio*3.14159);
    printf("Area: %f\n", raio*raio*3.14159);

    return 0;
}