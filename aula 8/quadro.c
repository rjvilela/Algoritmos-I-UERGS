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


#include <stdio.h>
main()
{
	float mes1[10], mes2[10], mes3[10], total_rebanho = 0;
	int i;
	for (i = 0; i<10; i++)
	{
		printf ("\ndigite o peso da cabra %d no mes 1", i);
		scanf ("%f",&mes1[i]);
		while (mes1[i] <= 0)
		{
			printf ("\ndigite o peso da cabra %d no mes 1", i);
		    scanf ("%f",&mes1[i]);
		}
		printf ("\ndigite o peso da cabra %d no mes 2", i);
		scanf ("%f",&mes2[i]);
		while (mes2[i] <= 0)
		{
			printf ("\ndigite o peso da cabra %d no mes 2", i);
		    scanf ("%f",&mes2[i]);
		}
		printf ("\ndigite o peso da cabra %d no mes 3", i);
		scanf ("%f",&mes3[i]);
		while (mes3[i] <= 0)
		{
			printf ("\ndigite o peso da cabra %d no mes 3", i);
		    scanf ("%f",&mes3[i]);
		}
		total_rebanho = total_rebanho + mes3[i];
		if (mes2[i] < mes1[i])
		{
			printf ("\ncabra %d perdeu %f entre mes 2 e mes 1", i,mes2[i]-mes1[i]);
			
		}
		else
		{
			if (mes2[i] == mes1[i])
			{
				printf ("\n nao ganho nem perdeu peso");
			}
			else
			{
			   	printf ("\ncabra %d ganhou %f entre mes 2 e mes 1", i,mes2[i]-mes1[i]);	
			}
		}
		if (mes1[i] > mes2[i] && mes1[i]>mes3[i])
        {
        	printf ("\n a cabra %d teve o maior peso no mes 1", i);
		}
		else
		{ 
		   if (mes2[i] > mes1[i] && mes2[i]>mes3[i])
		   {
		   	 printf ("\n a cabra %d teve o maior peso no mes 2", i);
		   }
		   else
		   {
		   	printf ("\n a cabra %d teve o maior peso no mes 3", i);
		   }
		}
	}
	printf ("\nTotal rebanho %f", total_rebanho);