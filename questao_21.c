#include <stdio.h>

int main(){
    int x, y;

    printf("Informe um valor inteiro: ");
    scanf("%d", &x);

    printf("Informe um segundo valor inteiro: ");
    scanf("%d", &y);

    switch (x%y){
        case 0 :
        printf("%d é multiplo de %d", x,y);
        break;
        
        default :
        printf("%d nao é multiplo de %d", x,y);
    }

    return 0;
}
