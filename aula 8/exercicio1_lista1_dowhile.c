/******************************************************************************

Faça um programa que lê valores inteiros maiores que 10 em um vetor de 7 posições.
Posteriormente crie um outro vetor com os elementos ímpares do vetor original.
Ao final do programa imprima os dois vetores criados.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#define tam 7

int main()
{
    int i, j=0, vet_int[tam], impar[tam];
    
    for(i=0; i < tam; i++)
    {
        printf("\nInforme 7 valores inteiros maiores que 10:\n");
        do
        {
            printf("\n%d valor:\n",i+1);
            scanf("%d", &vet_int[i]);
        } while(vet_int[i] <= 10);
            if((vet_int[i] % 2) != 0)
            {
                impar[j] = vet_int[i];
                j++;
            }
    }
    
    for(i=0; i<tam; i++)
    {
        printf("\nValores vetor original %d", vet_int[i]);
    }
    printf("\n\n");
    for(i=0; i<j; i++)
    {
        printf("\nValores vetor impar %d", impar[i]);
    }
}
