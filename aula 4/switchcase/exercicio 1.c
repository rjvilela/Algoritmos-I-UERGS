/* Uma loja fornece 10% de desconto para funcionários e 5% de desconto para clientes vips. 
Faça um programa que calcule o valor total a ser pago por uma pessoa. O programa deverá ler o valor 
total da compra efetuada e um código que identifique se o comprador é um cliente comum (1), funcionário 
(2) ou vip (3).  */


#include <stdio.h>

int main()
{
int codigo;
float valor;

printf ("PROGRAMA DE DESCONTOS");
printf ("\ndigite o valor da compra");
scanf ("%f", & valor);
printf ("\n Digite (1) cliente comum, (2) funcionario (3) VIP ");
scanf ("%d", & codigo);
	switch (codigo)
	{
		case 1:
			printf ("o valor da compra e %.2f", valor);
			break;
		
		case 2:
			printf ("o valor da compra e %.2f", valor*0.95);
			break;
		
		case 3:
			printf ("o valor da compra e %.2f", valor*0.90);
			break;
		
		default: printf ("\nopcao não existe no Menu");
	
}

}