/*
2)	Um fazendeiro deseja controlar o peso de seu pequeno rebanho de cabras, assim ele irá por 3 meses 
pesar cada um de seus 10 animais e registar o peso de cada um. Você irá criar um programa que possibilite 
estes registros mensais para as 10 cabras. O programa irá mostrar para cada animal a perda ou ganho de pesos 
nos três meses e identificar em qual mês o animal teve o maior peso. Informe, também, o peso total do rebanho 
no último mês e o valor da diferença entre o primeiro mês e o último mês do registro. 
*/

#include <stdio.h>

int main()
{

float mes1[10], mes2[10], mes3[10];
int i, j=0, cabra = 0;

//criação do vetor mes1

for (i=0; i<10; i++)
{
printf ("\ndigite o peso da cabra %d no mes 1", i);
scanf ("%d", & mes1[i]);

while (mes1[i] <= 0)
{
printf ("\ndigite o peso da cabra %d no mes 2", i);;
scanf ("%d", & mes2[i]);
}
// criacao do vetor mes2
printf ("\ndigite o peso da cabra %d no mes 2", i);
scanf ("%d", & mes2[i]);

while (mes2[i] <= 0)
{
printf ("\ndigite o peso de cada animal\n cabra %d :" ,i);
scanf ("%d", & mes2[i]);
}
}
}
}

//informacoes de cada cabra