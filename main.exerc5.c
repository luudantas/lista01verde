#include <stdio.h>
#include <stdlib.h>
/*
    Autora: Luana Dantas
    Data: 17/3/26
    Objetivo: Um hotel com 80 apartamentos deseja fazer uma promoção especial de final de semana,
    concedendo um desconto de 25% na diária. Com isto, espera aumentar sua taxa de ocupação
    de 50 para 80%. Sendo dado o valor normal da diária, calcular e imprimir:
    o valor da diária promocional;
    o valor total arrecadado com 80% de ocupação e diária promocional;
    o valor total arrecadado com 50% de ocupação e diária normal;
    a diferença entre estes dois valores.
*/
int main()
{
    //Declaração
    float diaria_norm, //valor normal da diária
    diaria_promo, //valor promocional da diária
    arrec_80, //valor total arrecadado com 80% de ocupação e diária promocional
    arrec_50; //o valor total arrecadado com 50% de ocupação e diária normal
    //Leitura
    scanf("%f",&diaria_norm);
    //Cálculos
    diaria_promo=0.75*diaria_norm;
    arrec_80=64*diaria_promo;
    arrec_50=0.5*80*diaria_norm;
    //Mostra
    printf("Valor promocional: %.2f\n",diaria_promo);
    printf("Promocional com 80%% ocupado: %.2f\n",arrec_80);
    printf("Normal com 50%% ocupado: %.2f\n",arrec_50);
    printf("Diferenca entre os valores: %.2f\n",(arrec_80-arrec_50));
    return 0;
}
