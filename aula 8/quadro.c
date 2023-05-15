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
    
    printf ("media da turma %f", soma/25);
    media = soma/25;
    for (i=0; i<=24; i++)
    {
        printf ("aluno %d nota %f", i, nota [i]);
        if (nota[i]>=media)
        {
            printf ("na media");
        }
        else
        {
        printf ("abaixo da media");
        }
    }

}


/* 
sempre terei que trabalhar com a variavel indice (i)
OBS - no moodle ela ira deixar o codigo das cabras faltando terminar o final- comparar o vetor 3 com
vetor 2 e tambem imprimir o valor total do rebanho no terceiro mes.
*/