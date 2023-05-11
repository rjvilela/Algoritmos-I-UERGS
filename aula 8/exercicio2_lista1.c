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
printf ("\ndigite o peso de cada animal\n cabra %d :" ,i+1);
scanf ("%d", & mes1[i]);
}

// criacao do vetor mes2
for (i=0; i<10; i++)
{
printf ("\ndigite o peso de cada animal no segundo mes \n cabra %d :" ,i+1);
scanf ("%d", & mes2[i]);
}

// criacao do vetor mes3

for (i=0; i<10; i++)
{
printf ("\ndigite o peso de cada animal no segundo mes \n cabra %d :" ,i+1);
scanf ("%d", & mes3[i]);
}


//informacoes de cada cabra