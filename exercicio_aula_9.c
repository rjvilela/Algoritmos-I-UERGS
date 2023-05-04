/*inicio da aula com exemplo no quadro de vetor com uso de for (contador)*/

#include <stdio.h>
int main ()
{
    float nota [25], media, soma=0;
    int i;

    for (i=0; i<25; i++)
    {
        printf ("\nInforme nota, %d", i);
        scanf ("%f", &nota[i]);
        while (nota [i] <0 || nota [i] > 10)
        {
        printf ("\nInforme nota, %d", i);
        scanf ("%f", &nota[i]);
        } 
        soma = soma + nota [i];  
    }
    
    printf ("\nmedia da turma %f", soma/25);
    media = soma/25;
    for (i=0; i<=24; i++)
    {
        printf ("\naluno %.2d nota %.2f", i, nota [i]);
        if (nota[i]>=media)
        {
            printf ("\nna media");
        }
        else
        {
        printf ("\nabaixo da media");
        }
    }

}