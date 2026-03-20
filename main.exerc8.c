#include <stdio.h>
#include <stdlib.h>
/*
    Autora: Luana Dantas
    Data:20/3/26
    Objetivo: Construa um programa que lê uma opção conforme tabela e o salário atual
    do funcionário, calcula e exibe o novo salário
*/
int main()
{
    //Declaração
    char opcao;
    float salario;
    //Leitura
    scanf(" %c",&opcao);
    scanf("%f",&salario);
    //Condicional
    switch (opcao)
    {
    case 'A':
        salario=1.08*salario;
        break;
    case 'B':
        salario=1.11*salario;
        break;
    case 'C':
        if (salario<=1000)
        {
            salario+=350;
        }
        else
        {
            salario+=200;
        }
        break;
    default:
        {
            printf("Opcao invalida\n");
        }
    }
    //Exibição
    printf("%.2f",salario);
    return 0;
}
