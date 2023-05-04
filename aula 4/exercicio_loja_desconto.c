#include <stdio.h>

int main ()
{
    int i, loop=1, loop2=1;
    float v_total;

    while(loop)
    {
    printf ("digite o valor da compra:  ");
    scanf ("%f", &v_total);
   
    if (v_total > 0)
    {
        loop = 0;
    }  
    else {
        printf ("opcao invalida\n");
    }
    }
   
    while (loop2)
    {
      
    printf ("Digite (1) se voce for cliente\nDigite (2) se voce for funcionario\nDigite (3) se voce for V.I.P: \n informe: ");
    scanf ("%d", &i);
    

    switch (i)
    {
        case 1:
        printf ("voce selecionou a opcao (1) cliente. O valor a ser pago e:  %f", v_total);
        loop2 = 0;
        break;

        case 2:
        printf ("voce selecionou a opcao (2) funcionario. O valor a ser pago e: %f", v_total*0.90);
        loop2 = 0;
        break;
        case 3:
        printf ("voce selecionou a opcao (3) - V.I.P. O valor a ser pago e: %f", v_total*0.95);
        loop2 = 0;
        break;
    default: printf ("opcao invalida");
    }
    
    }
    
     
}