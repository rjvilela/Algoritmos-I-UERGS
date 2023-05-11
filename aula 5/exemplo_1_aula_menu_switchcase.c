/*Programa de opção de menu 1-soma, 2-subtração e 3 - multiplicação
com switch case*/

#include <stdio.h>

int main()
{
    int num1, num2, resultado, opcao;
    printf("Menu\n");
    printf("1 - Soma\n");
    printf("2- Subtracao\n");
    printf("3- Multiplicacao\n");
    printf("Digite a opcao desejada: ");
    scanf ("%d", &opcao);
    
    switch (opcao)
    {
        case 1:
            printf("Digite o valor 1: ");
            scanf ("%d", &num1);
            printf("Digite o valor 2: ");
            scanf ("%d", &num2);
            resultado = num1 + num2;
            printf ("\nResultado da soma = %d", resultado);
            break;
        case 2:
            printf("Digite o valor 1: ");
            scanf ("%d", &num1);
            printf("Digite o valor 2: ");
            scanf ("%d", &num2);
            resultado = num1 - num2;
            printf ("\nResultado da subtracao = %d", resultado);
            break;
        case 3:
            printf("Digite o valor 1: ");
            scanf ("%d", &num1);
            printf("Digite o valor 2: ");
            scanf ("%d", &num2);
            resultado = num1 * num2;
            printf ("\nResultado da multiplicacao = %d", resultado);
            break;

        default: printf ("\nopcao não existe no Menu");
    }
    
}
