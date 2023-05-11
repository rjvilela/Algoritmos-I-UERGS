45	67	89	55	88
0			1		2			3		4
#include <stdio.h>

int main()
{
   int vetor[5], i;
   for (i=0;  i<5;   i++)
   {
      printf ("\n Informe um valor");
      scanf ("%d", &vetor[i]);
   }
   for (i=0;  i<5;   i++)
   {
      printf ("\n valor do indice %d = %d", i, vetor[i]);
   }  
   for (i=4;  i>=0;   i--)
   {
      printf ("\n valor do indice %d = %d", i, vetor[i]);
   }
}     
    
      
