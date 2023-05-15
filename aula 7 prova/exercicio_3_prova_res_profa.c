#include <stdio.h>
int main()
{
	int cont_cli = 1, cont_atend = 1, prod, qtd_cli = 0;
	float preco_pao, preco_queijo, preco_mel, preco_leite;
	float qtd_leite, qtd_queijo, qtd_mel;
	int qtd_pao;
	float total_cli = 0, total_dia = 0;
	printf ("\nInforme o valor do litro do leite");
	scanf ("%f", &preco_leite);
	while (preco_leite <= 0)
	{
		printf ("\nInforme o valor do litro do leite");
	    scanf ("%f", &preco_leite);
	}
	printf ("\nInforme o valor do kg do mel");
	scanf ("%f", &preco_mel);
	while (preco_mel <= 0)
	{
		printf ("\nInforme o valor do kg do mel");
	    scanf ("%f", &preco_mel);
	}
	printf ("\nInforme o valor do pao");
	scanf ("%f", &preco_pao);
	while (preco_pao <= 0)
	{
		printf ("\nInforme o valor do pao");
	    scanf ("%f", &preco_pao);
	}
	printf ("\nInforme o valor do kg do queijo");
	scanf ("%f", &preco_queijo);
	while (preco_queijo <= 0)
	{
		printf ("\nInforme o valor do kg do queijo");
	    scanf ("%f", &preco_queijo);
	}
	while (cont_atend == 1)
	{
	    
		while (cont_cli == 1)
		{
			
			printf ("\nInforme o produto");
			scanf ("%d", &prod);
			while (prod < 0 || prod > 4)
			{
				printf ("\nInforme o produto");
			    scanf ("%d", &prod);
			}
			switch (prod)
			{
				case 1: printf ("\nInforme a quantidade de pao");
			            scanf ("%d", &qtd_pao);
				        while (qtd_pao < 1)
				        {
				          printf ("\nInforme o a qtd de pao");
			              scanf ("%d", &qtd_pao);	
						}
						total_cli = total_cli + (qtd_pao * preco_pao);
						break;
				case 2:printf ("\nInforme a quantidade de mel");
				        scanf ("%f", &qtd_mel);
				        while (qtd_mel < 0.2 || qtd_mel > 10)
				        {
				          printf ("\nInforme a quantidade de mel");
			              scanf ("%d", &qtd_mel);	
						}
						total_cli = total_cli + (qtd_mel * preco_mel);
						break;
				case 3: printf ("\nInforme a quantidade de queijo");
				        scanf ("%f", &qtd_queijo);		
						while (qtd_queijo < 0.2 || qtd_queijo > 10)
				        {
				          printf ("\nInforme a quantidade de queijo");
			              scanf ("%d", &qtd_queijo);	
						}
						total_cli = total_cli + (qtd_mel * preco_mel);
						break;
				case 4: printf ("\nInforme a quantidade de leite");
				        scanf ("%f", &qtd_leite);		
						while (qtd_leite < 0.5)
				        {
				          printf ("\nInforme a quantidade de leite");
			              scanf ("%d", &qtd_leite);	
						}
						total_cli = total_cli + (qtd_leite * preco_leite);
						break;
					
			}
			printf ("\n O cliente possui compras ainda 1- sim 2 - n�o");
			scanf ("%d", &cont_cli);
			while (cont_cli < 1 || cont_cli > 2)
			{
				printf ("\n O cliente possui compras ainda 1- sim 2 - n�o");
			    scanf ("%d", &cont_cli);
			}
			if (cont_cli == 2)
			{
				qtd_cli ++;
				printf ("\ncompra do cliente = %f", total_cli);
				total_dia = total_dia + total_cli;
				printf ("\n Ira atender outro cliente 1 - sim 2- nao");
				scanf ("%d", &cont_atend);
				while (cont_atend < 1 || cont_atend > 2)
				{
					printf ("\n Ira atender outro cliente 1 - sim 2- nao");
				    scanf ("%d", &cont_atend);
			    }
				if (cont_atend == 1)
				{
				  	cont_cli = 1;
				   	total_cli = 0;
				    	
				}
				
	    	}
		}
	}
	printf ("\n Total de clientes %d e total do dia %f", qtd_cli,total_dia);
	
}