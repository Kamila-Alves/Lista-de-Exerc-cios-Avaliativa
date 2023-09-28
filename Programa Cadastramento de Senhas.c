#include <stdio.h>
#include <stdbool.h>

int main () {

int senha;
bool SenhaCadastrada = false;
int Digitada; 

printf("Cadastre uma senha numerica de quatro digitos: \n");
scanf("%d", &senha); 

while (true){
    printf("Digite a senha para a validacao do programa: \n");
    scanf("%d", &Digitada); 
    
    if (Digitada == senha)  {
        SenhaCadastrada = true;
        break;
    }
    else {
        printf("Senha Invalida! Tente Novavamente. \n");
    }
}

if (SenhaCadastrada)
{
    printf("Senha Valida! \n");
}


    return 0;
}