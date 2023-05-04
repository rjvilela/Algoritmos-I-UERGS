#include <stdio.h>
int main()
{
    float valor, conta;
    printf("digite o valor em metros : ");
    scanf  ("%f", &valor);
    conta = valor * 100;
    printf ("\no valor em cm eh igual a %.2f", conta);
}