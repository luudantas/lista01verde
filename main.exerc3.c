#include <stdio.h>
#include <stdlib.h>
/*
    Autora: Luana Dantas
    Data: 17/3/26
    Objetivo: Leia o ano de nascimento de uma pessoa e
    calcule sua idade, considerando o ano atual.
    Pergunte se a pessoa já fez aniversário, sendo
    que ela pode entrar com a informação "S"(sim) ou "N"(não).
    Imprima a idade da pessoa. Verifique também se a pessoa já
    tem idade para conseguir Carteira de Habilitação (18 anos ou mais)
    e imprima a mensagem referente a esta checagem ("Pode dirigir"ou "Nao pode dirigir").
*/
int main()
{
    //Declaração
    int ano_nasc, idade;
    char resposta;
    //Leitura do ano de nascimento
    scanf("%d",&ano_nasc);
    //Pergunta
    printf("Voce ja fez aniversario esse ano? ");
    //Leitura da resposta
    scanf(" %c",&resposta);
    //Condicionais
    if (resposta='S')
    {
        idade=2026-ano_nasc;
    }
    else 
    {
        idade=2025-ano_nasc;
    }
    //Impressão da idade
    printf("%d\n",idade);
    //Condicionais e impressão
    if (idade>=18)
    {
        printf("Pode dirigir\n");
    }
    else
    {
        printf("Nao pode dirigir\n");
    }
    return 0;
}
