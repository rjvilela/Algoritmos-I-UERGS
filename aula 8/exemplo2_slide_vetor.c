/*Faça um programa que execute as seguintes etapas:

Digite 10 números inteiros e os armazene em um vetor;
Verifique qual desses números é maior;
Imprima os elementos do vetor e em seguida o seu maior elemento.*/

#include <stdio.h>

int main()
{
    int vetor[10], maior, i;

    for (i=0; i<10; i++){
        
    printf ("digite 10 valores aleatórios: ");
    scanf ("%d", &vetor[i]);
    }
    
    for (i=0; i<10; i++) {
        if (vetor[i] > maior)
        maior = vetor[i];
    }

    for (i=0; i<10; i++) {
        printf ("%d", vetor[i]);
        printf ("\nO maior valor do vetor eh: %d", maior);
    }
}