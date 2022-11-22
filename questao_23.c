#include <stdio.h>

int main(){
    int x, d1, d2, d3;

    printf("Informe um numero de tres digitos: ");
    scanf("%d", &x);

    d1 = x / 100;
    d2 = (x%100)/10;
    d3 = (x%100)%10;

    printf("%d%d%d", d3, d2, d1);



    return 0;
}
