#include <stdio.h>
#include <stdlib.h>
/*
    Autora: Luana dantas
    Data: 17/3/26
    Objetivo:Ler do teclado dois números inteiros e imprimir o maior deles.
*/

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("%d",a);
    }
    else if (b>a)
    {
        printf("%d",b);
    }
    return 0;
}
