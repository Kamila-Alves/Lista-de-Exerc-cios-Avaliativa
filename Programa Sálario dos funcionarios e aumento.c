#include <stdio.h>

int main (){
    float Salario; 
    char Nivel;
    float AtualizacaoDoSalario; 
    float aumento;

    
    printf("Digite o nivel de experiencia do funcionaio (a, b ou c): \n");
    scanf("%c", &Nivel); 

    if (Nivel != 'a' && Nivel != 'b' && Nivel != 'c'){
        printf("O nivel de experiencia digitado e invalido. \n");
        return 1;
    }

    printf("Digite o salario do funcionario \n");
    scanf("%f", &Salario);

    switch (Nivel) {
    case 'a':
        aumento = 0.05; 
        break;

    case 'b':
        aumento = 0.07;
        break;

    case 'c':
        aumento = 0.08;
        break;    
    }
    

    AtualizacaoDoSalario = Salario + (Salario * aumento); 

    printf("O salario atualizado do funcionario sera R$ %.2f \n", AtualizacaoDoSalario);

    return 2;
}