#include <stdio.h>

int main ()
{
    int i, teclado;

    printf ("digite o tamanho desejado");
    scanf ("%d", &teclado);

    for (i = 0; i < teclado; i++)
    {
        printf ("*");
    }
    
    printf ("\n");
    
    for (i=0; i < (teclado/2); i++)
    {
        printf ("*");
        for(i=0; i < teclado; i++)
        {
            printf (" ");
        }
        printf ("*");

        printf ("\n");
    }
    printf ("\n");
    for (i = 0; i < teclado; i++)
    {
        printf ("*");
    }

}