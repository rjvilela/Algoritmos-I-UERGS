/******************************************************************************
Exemplo de switch case com cases comuns
quando opcao for 3 e 5 imprime os 2 numeros
quando for 2 e 4 imprima a soma dos números
quando for 1 imprime subtração dos dois números
as opções possíveis são 1,2,3,4 e 5

*******************************************************************************/

#include <stdio.h>

 
int main()
{
    int num1, num2, opcao;
    
    printf ("\n informe a opcao 1,2,3,4 ou 5  ");
    scanf ("%d", &opcao);
    
    printf ("\nInforme o primeiro numero ");
    scanf ("%d", &num1);
    
    printf ("\nInforme o segundo numero ");
    scanf ("%d", &num2);
    
    switch (opcao)
    {
        case 1: printf ("\n subtracao = %d", num1 - num2);
                break;
        case 3:
        case 5: printf ("\n numero lidos %d %d ", num1, num2);
                break;
        case 2:
        case 4: printf ("\n soma dos numeros %d ", num1+num2);
                break;
        default: printf ("\n opcao incorreta");        
                
    }
    
   
    
}    
