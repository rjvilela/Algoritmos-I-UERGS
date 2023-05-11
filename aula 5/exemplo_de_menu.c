/******************************************************************************

                Programa com uso de munu, com as opções:
                1-Soma
                2-Subtração
                3- Multiplicação
                4 - Divisão
                5 - Resto da Divisão
                6 - Potência
                As operações serão realizadas sobre 2 números inteiros fornecidos pelo usuário
                Com consistências de dados de entrada
*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, op;
    printf("MENU");
    printf ("\n 1-Soma");
    printf ("\n 2-Subtração");
    printf ("\n 3-Multiplicação");
    printf ("\n 4-Divisão");
    printf ("\n 5-Resto da Divisão");
    printf ("\n 6-Potência");
    
    printf("\n Digite a opcão ");
    scanf ("%d", &op);
    
    if (op == 1 || op==2 || op==3 || op == 4 || op == 5 || op == 6)
    {
       printf ("\n Informe o primeiro numero ");
       scanf ("%d", &num1);
       printf ("\n Informe o segundo numero ");
       scanf ("%d", &num2);
       
       if (op == 1)
       {
          printf ("\n O valor da soma %d + %d = %d", num1, num2, num1+num2);  
       }
       else
       {
         if(op == 2)
         {
            printf ("\n O valor da subtração %d - %d = %d", num1, num2, num1-num2); 
         }
         else
         {
           if (op == 3)
           {
               printf ("\n O valor da multiplicação %d * %d = %d", num1, num2, num1*num2);
           }
           else
           {
               if (op == 4)
               {
                   if (num2 == 0)
                   {
                       printf ("\n Não pode ser realizado divisão por zero");
                   }
                   else
                   {
                       printf ("\n o valor da divisão de %d / %d = %f", num1, num2, (float)num1/(float)num2);
                   }
               }
               else
               {
                   if (op == 5)
                   {
                       printf ("\n Resto da divisão de %d por %d = %d", num1, num2, num1%num2);
                   }
                   else
                   {
                       printf ("\n Potencia de %d por %d = %lf", num1, num2, pow (num1, num2));
                   }
               }
           }
         }
       }
    }
    else
    {
        printf ("\n Opção não existe no menu");
    }
    
    
    
}
