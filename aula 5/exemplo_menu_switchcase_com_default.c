
/******************************************************************************
Programa para apresentar Menu (Tipo uma calculadora), com as seguintes operações:
1- soma, 2- subtração, 3 - divisão, 4 - multiplicação, 5 - resto da divisão
Estas operações devem ser realizadas sobre 2 número inteiros lidos do teclado

Com switch case

com o default

*******************************************************************************/

#include <stdio.h>

 
int main()
{
    int num1, num2, opcao;
    
   
    printf ("MENU");
    printf ("\n1 - Soma");
    printf ("\n2 - Subtração");
    printf ("\n3 - Divisão");
    printf ("\n4 - Multiplicação");
    printf ("\n5 - Resto da Divisão");
    printf ("\nInforme a opcao desejada ");
    scanf  ("%d", &opcao);
    
   
    switch (opcao)
        {
            case 1: printf ("\nInforme o primeiro numero ");
                    scanf ("%d", &num1);
                    printf ("\nInforme o segundo numero ");
                    scanf ("%d", &num2);
    
                     printf ("\nValor da soma %d + %d = %d", num1, num2, num1+num2);
                     break;
            case 2:  printf ("\nInforme o primeiro numero ");
                     scanf ("%d", &num1);
                     printf ("\nInforme o segundo numero ");
                     scanf ("%d", &num2);
                     printf ("\nValor da subtracao %d - %d = %d", num1, num2, num1-num2);
                     break;
            case 3: printf ("\nInforme o primeiro numero ");
                    scanf ("%d", &num1);
                    printf ("\nInforme o segundo numero ");
                    scanf ("%d", &num2);
                    if (num2 > 0)
                    {
                       printf ("\nValor da divisão %d / %d = %f", num1, num2, (float)num1/(float)num2);
                    }
                    else
                    {
                        printf ("\nNão é possível fazer divisão por zero");
                    } 
                    break;
            case 4: printf ("\nInforme o primeiro numero ");
                    scanf ("%d", &num1);
                    printf ("\nInforme o segundo numero ");
                    scanf ("%d", &num2);
                    printf ("\nValor da multiplicação %d * %d = %d", num1, num2, num1*num2);
                    break;
            case 5: printf ("\nInforme o primeiro numero ");
                    scanf ("%d", &num1);
                    printf ("\nInforme o segundo numero ");
                    scanf ("%d", &num2);
                    if (num2 == 0)
                    {
                      printf ("\nDivisão por zero não pode");
                    }
                    else
                    {
                     printf ("\nValor do resto da divisão %d resto %d = %d", num1, num2, num1%num2);
                    }  
                    break;
            default: printf ("\nopcao inválida");        
        }            
    
}  
