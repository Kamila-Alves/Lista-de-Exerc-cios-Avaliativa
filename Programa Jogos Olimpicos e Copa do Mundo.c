#include <stdio.h>

int main () {

    int anosjogosOlimpicos [] = {1896, 1900, 1904, 1908, 1912, 1920, 1924, 1928, 1932, 1936, 1948, 1952, 1960, 1964, 1968, 1972, 1976, 1980, 1984, 1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016, 2020, 2024};
    int anoscopadoMundo [] = {1930, 1934, 1938, 1950, 1954, 1958, 1962, 1966, 1970, 1974, 1978, 1982, 1986, 1990, 1994, 1998, 2002, 2006, 2010, 2014, 2022};
    int ano;
    int continuar = 1;
    
    while (continuar) {
    printf("Inisira um ano para a verficacao: \n"); 
    scanf("%d", &ano);

    int verificarOlimpicos = 0;
    int verificarCopa = 0;

    for (int i = 0; i < sizeof(anosjogosOlimpicos) / sizeof(anosjogosOlimpicos[0]); i++)
    {
        if (ano  == anosjogosOlimpicos[i]) {
        verificarOlimpicos = 1; 
        break;
        }
        
    }

    for (int i = 0; i < sizeof(anoscopadoMundo) / sizeof(anoscopadoMundo[0]); i++)
    {
        if (ano == anoscopadoMundo[i]){
            verificarCopa = 1;
            break;
        }
        
    }

    if (verificarOlimpicos)
    {
        printf("Os Jogos Olimpicos de verao ocorreram no ano de %d. \n", ano);
    }
    
    if (verificarCopa)
    {
        printf("A Copa do Mundo de Fultebol ocorreu no ano de %d. \n", ano);
    }
    
    if (!verificarOlimpicos && !verificarCopa){
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no %d. \n", ano);
    }
    
    printf("Deseja verificar outro ano? (1 para sim, 0 para nao): ");
    scanf("%d", &continuar);

}


    return 1;
}