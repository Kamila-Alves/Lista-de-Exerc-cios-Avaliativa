#include <stdio.h>

int main () {
    int valor1;
    int valor2;


    printf("Digite o primeiro valor: \n");
    scanf("%d", &valor1);

    printf("digite o segundo valor: \n");
    scanf("%d", &valor2);

    if (valor1 > valor2) {
        printf("%d eh maior que %d \n", valor1, valor2);
    } 
    
    else if (valor1 < valor2) {
        printf("%d eh menor que %d \n", valor1, valor2);
    }
    
    else {
        printf("Os valores lidos sao iguais \n");
    }

    if (valor1 % valor2 == 0) {
        printf("%d eh multiplo de %d \n", valor1, valor2);
    }

    else {
        printf("%d nao eh multiplo de %d \n", valor1, valor2);
    }
    

    return 0;
}