/*Faça um programa que armazena valores de salários dos últimos 5 meses de um funcionário. 
O funcionário pode receber a mais de um mês para outro maior, mas nunca menos. Informe ao final
 se o funcionário recebeu algum aumento e em que mês. Calcule o valor total recebido nos 5 meses.*/


 #include <stdio.h>

 int main ()
 {
 float salario[5];
 int mes_aumento = 0;
 int i;
                //preenchimento vetor com salarios
    for (i=0; i<5; i++)
    {
        printf ("digite o valor do salario no mes %i ", i+1);
        scanf ("%f", &salario[i]);
    }
                //verificar se houve aumento
    for(i=1; 1<5; i++)

           
  
    for (i=0; i<5; i++)
    {
        printf ("%4.f ", salario[i]);
    }
 }