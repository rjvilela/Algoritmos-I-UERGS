/******************************************************************************
Comando de decisão switch case

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, op;
    printf("MENU");
    printf ("\n 1-Soma");
    printf ("\n 2-Subtração");
    printf ("\n 3- Multiplicação");
    
    printf("\n Digite a opcão ");
    scanf ("%d", &op);
    
    if (op == 1 || op==2 || op==3) //|| op == 4 || op == 5 || op == 6)
    {
       printf ("\n Informe o primeiro numero ");
       scanf ("%d", &num1);
       printf ("\n Informe o segundo numero ");
       scanf ("%d", &num2);
       
      
      switch (op)
      {
          case 1: printf ("\n O valor da soma %d + %d = %d", num1, num2, num1+num2);  
                  break;
          case 2: printf ("\n O valor da subtração %d - %d = %d", num1, num2, num1-num2);
                  break;
          case 3: printf ("\n O valor da multiplicação %d * %d = %d", num1, num2, num1*num2);
                  break;
                 
      }
    }
    else
    {
        printf ("\n Opção não existe no menu");
    }
  }
