#include <stdio.h>

int main()
{
    int valor1, valor2, valor3;
    printf ("escreva o valor1 :");
    scanf ("%d", &valor1);
    printf ("escreva o valor2 :");
    scanf ("%d", &valor2);
    printf ("escreva o valor3 :");
    scanf ("%d", &valor3);

    if (valor1>valor2 && valor1>valor3)
    {
        printf (" o maior valor e : %d", valor1);
    }
    else {
        if (valor2>valor1 && valor2>valor3)
        {
            printf ("o maior valor e : %d", valor2);
        }
    
        else {
            printf ("o maior valor e : %d", valor3);
        }
        }
}  