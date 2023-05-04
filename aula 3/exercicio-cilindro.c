#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float raio, altura, area_base, area_lateral, area_total, rendimento_lata, valor_lata, qtd_latas;

    printf("digite o raio do cilindro: \n");
    scanf("%f", &raio);
    printf("digite a altura do cilindro: \n");
    scanf("%f", &altura);
    printf("digite o valor da lata de tinta: \n");
    scanf("%f",&valor_lata);
    printf("digite o rendimento da lata comprada em  quadrados: \n");
    scanf("%f",&rendimento_lata);

    area_base = (float)(pow(3.14 , 2)) *raio;
    area_lateral = (float) (2 * 3.14 * altura);
    area_total = 2*area_base+area_lateral;
    
    qtd_latas=area_total/rendimento_lata;
    
    printf ("voce ira precisar de %.2f\n", qtd_latas);
    printf ("voce ira precisar de %.2f reais", valor_lata*qtd_latas);
}