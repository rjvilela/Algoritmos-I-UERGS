// 1)	Faça um programa que lê valores inteiros maiores que 10 em um vetor de 7 posições. 
//Posteriormente crie um outro vetor com os elementos ímpares do vetor original. 
//Ao final do programa imprima os dois vetores criados.

#include<stdio.h>
int main()
{
    int original[7], impar [7], i, cont = 0;
    
    for (i = 0; i <= 7; i++)
    {
       printf ("\n Digite uma valor maior que 10 ");
       scanf ("%d", &original[i]);
       while (original[i] <= 10)
       {
           printf ("\no valor informado deve ser maior que 10");
           scanf ("%d", &original[i]);
       }
    }
    for (i = 0; i <= 7; i++)
    {
        if (original[i]%2 != 0)
        {
            impar[cont] = original[i];
            cont++;
        }
    }
    printf ("\n Vetor original");
    for (i = 0; i <= 7; i++)
    {
        printf ("\n posicao %d = %d", i, original[i]);
    }
    if (cont == 0)
    {
        printf ("\n vetor de impares vazio");
    }
    else
    {
        printf ("\n Vetor de impares");
        for (i = 0; i < cont; i++)
        {
            printf ("\n impar %d = %d ", i, impar[i]);
        }
    } 
       
}
