#include <stdio.h>
#include <math.h>

int main()
{

int senha;

	printf ("digite a senha : ");
	scanf ("%d", & senha);
	if (senha == 1234)
	{
    printf ("\n acesso permitido");
	}
		else
    	{
        printf("acesso negado");
        }
}

/* Cometi um erro tosco, coloquei ponto e virgula no final do if*/

