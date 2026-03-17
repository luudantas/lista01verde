#include <stdio.h>
#include <stdlib.h>
/*
    Autora: Luana Dantas
    Data: 17/3/26
    Objetivo:  Leia a velocidade máxima permitida em uma avenida e
    a velocidade com que o motorista estava dirigindo nela.
    Se o motorista estiver dentro do limite de velocidade,
    imprima a mensagem “Motorista respeitou a lei”.
    Se o motorista tiver ultrapassado a velocidade máxima permitida,
    calcule e imprima o valor da multa a ser cobrada, sabendo os valores a serem cobrados
*/
int main()
{   int v_max,v,multa;
    scanf("%d%d",&v_max,&v);
    if (v<v_max)
    {
        printf("Motorista respeitou a lei\n");
    }
    else if (v>v_max)
    {
        if (v<=(v_max+10))
        {
            multa=50;
        }
        else if (v>=(v_max+11) && v<=(v_max+30))
        {
            multa=100;
        }
        else if (v>(v_max+30))
        {
            multa=200;
        }
        printf("Multa de %d reais\n",multa);
    }
    return 0;
}
