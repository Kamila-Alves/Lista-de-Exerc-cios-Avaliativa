#include <stdio.h>

int main () {

    int  numero;
    int soma = 0; 
    int digito;


    printf("Digite o numero que deseja verificar: \n", numero);
    scanf("%d", &numero);

    if (numero % 2 == 0){
        printf("%d eh par. \n", numero);
    }

    if (numero % 2 == 1){
        printf("%d eh impar. \n", numero);
    }
    

    int algorismoSoma = numero;
    
    while (algorismoSoma != 0) {
        digito = algorismoSoma % 10;
        soma += digito;
        algorismoSoma /= 10;
    }

    printf("A Soma dos algorismos de %d eh igual a %d", numero, soma);



    return 0;
}