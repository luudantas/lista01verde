#include <stdio.h>
#include <stdlib.h>
/*
    Autora: Luana Dantas
    Data: 17/3/26
    Objetivo: Faça um programa para calcular e imprimir o valor de Y,
    dado um valor de X e seguindo condições segundo uma tabela
*/
int main()
{
    float x, y;
    scanf("%f",&x);
    if (x<=1)
    {
        y=1;
    }
    else if (x>1 && x<=2)
    {
        y=2;
    }
    else if (x>2 && x<=3)
    {
        y=x*x;
    }
    else if (x>3)
    {
        y=x*x*x;
    }
    printf("%.2f",y);
    return 0;
}
