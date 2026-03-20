#include <stdio.h>
#include <stdlib.h>
/*
    Autora: Luana Dantas
    Data: 20/3/26
    Objetivo: Fazer um programa para ler um símbolo do teclado; identificar com a
    estrutura SWITCH e mostrar o nome do símbolo
*/
int main()
{
    //Declaração
    char simbolo;
    //Leitura
    scanf(" %c",&simbolo);
    //Condicional e exibição
    switch(simbolo)
    {
    case '<':
        printf("SINAL DE MENOR\n");
        break;
    case '>':
        printf("SINAL DE MAIOR\n");
        break;
    case '=':
        printf("SINAL DE IGUAL\n");
        break;
    default:
        printf("OUTRO SINAL\n");
    }
    return 0;
}
