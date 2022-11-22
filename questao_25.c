#include <stdio.h>

int main(){
    int x, d1, d2, d3;

    printf("Informe um tempo, em segundos: ");
    scanf("%d", &x);

    d1 = x / 3600;
    d2 = (x%3600)/60;
    d3 = (x%3600)%60;

    printf("%dh:%dm:%ds", d1, d2, d3);



    return 0;
}
