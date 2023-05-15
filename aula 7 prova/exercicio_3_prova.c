#include <stdio.h>
int main ()
{
    int cod_prod, total_cliente = 1, loop=1,unid;
    float p_unit, quilo, litro, valor, total_arrec;
    while (loop)
    {
        printf ("\ndigite o codigo do produto: (1) pao (2) mel (3) queijo (4) leite (5)  fim (6) novo cliente");
        scanf ("%d", &cod_prod);
        switch (cod_prod)
        {
            total_cliente++;
            case 1:
            printf ("\npao");
            printf ("\ninforme o preco unitario\n");
            scanf ("%f", &p_unit);
            printf ("\ninforme quantas unidades\n");
            scanf ("%d", &unid);
            valor = unid*p_unit;
            printf ("\nvalor %f", valor);
            total_arrec = total_arrec + valor;
            break;

            case 2:
            printf ("\nmel");
            printf ("\ninforme o preco unitario");
            scanf ("%f, &p_unitario");
            printf ("\ninforme quantos quilos");
            scanf ("%f", &quilo);
            if (quilo < 0.2 && quilo > 10)
            {
                printf ("\nvalor nao permitido\n");
            }
            valor = quilo*p_unit;
            printf ("\nvalor %f", valor);
            total_arrec = total_arrec + valor;
            break;
            case 3:
            printf ("\nqueijo");
            printf ("\ninforme o preco unitario");
            scanf ("%f", &p_unit);
            printf ("\ninforme quantos quilos");
            scanf ("%f", &quilo);
            if (quilo < 0.2 || quilo > 10)
            {
                printf ("\nvalor nao permitido");
            }
            valor = quilo*p_unit;
            printf ("\nvalor %f", valor);
            total_arrec = total_arrec + valor;
            break;

            case 4:
            printf ("\nleite");
            printf ("\ninforme o preco do litro");
            scanf ("%f", &p_unit);
            printf ("\ninforme quantos litros");
            scanf ("%f", &litro);
            if (litro<0.5)
            {
                printf ("\nvalor nao permitido");
            }
            valor = litro*p_unit;
            printf ("\nvalor %f", valor);
            total_arrec = total_arrec + valor;
            break;

            case 5:
            loop=0;
            break;

            case 6:
            loop = 1;
            break;
        }
            printf ("\no valor total vendido foi %f", total_arrec);
            printf ("\nnumero de clientes %d", total_cliente);
    }
    total_cliente++;
}