#include <stdio.h>
#include <stdlib.h>
/*
    Autora:Luana Dantas
    Data:17/3/26
    Objetivo: Faça um algoritmo que segundo uma nota informada pelo usuário,
    verifique em qual faixa a mesma se encaixa e imprima para o usuário a
    mensagem correspondente conforme uma tabela
*/
int main()
{
    float nota;
    scanf("%f",&nota);
    if (nota>=8 && nota<=10)
    {
        printf("Otimo");
    }
    else if (nota>=7 && nota<8)
    {
        printf("Bom");
    }
    else if (nota>=5 &&nota<7)
    {
        printf("Regular");
    }
    else if (nota<5)
    {
        printf("Insatisfatorio");
    }
    return 0;
}
