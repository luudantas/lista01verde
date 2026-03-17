#include <stdio.h>
#include <stdlib.h>
/*
    Autora: Luana Dantas
    Data: 17/3/26
    Objetivo:Faça um algoritmo que leia 2 números inteiros e
    faça sua adição. Se o resultado for maior ou igual a 10,
    some 5 a este número. Caso contrário some 7 a ele. Imprima o resultado final.
*/
int main()
{
    //Declaração de variáveis
    int a, b, soma;
    //Leitura
    scanf("%d%d",&a,&b);
    //Cálculos
    soma=a+b;
    //Condicionais e mostra
    if (soma>=10)
    {
        soma+=5;
        printf("%d", soma);
    }
    else
    {
        soma+=7;
        printf("%d",soma);
    }
    return 0;
}
