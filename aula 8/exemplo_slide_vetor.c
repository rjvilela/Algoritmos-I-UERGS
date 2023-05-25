/*Faça um programa que leia dez números e os imprima em ordem inversa:*/

#include <stdio.h>

int main ()
{
    int vetor[3];
    int i;

    for (i=0; i<3; i++) {
        printf ("digite 3 valores: ", i);
        scanf ("%d", &vetor[i]);
    }
    printf ("\nOs valores ao contrario sao: ");
    for (i=3; i>=0; i--) {
        printf ("%d", vetor[i]);
    }
}
