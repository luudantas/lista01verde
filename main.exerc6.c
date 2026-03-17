#include <stdio.h>
#include <stdlib.h>
/*
    Autora: Luana Dantas
    Data: 17/3/26
    Objetivo: Faça um programa para ler os coeficientes de
    uma equação do primeiro grau (ax + b = 0), calcular e escrever a raiz da equação.
*/
int main()
{
    int a,b;
    float x;
    scanf("%d%d",&a,&b);
    x=(-b)/a;
    printf("%.2f",x);
    return 0;
}
