    #include <stdio.h>

    int main()
    {
        int num1, num2, loop=1, menu;
        
        while (loop)
    {   
        printf ("digite o primeiro valor: ");
        scanf ("%d", &num1);
        printf ("digite o segundo valor: ");
        scanf ("%d", &num2);
        
        printf ("/n *MENU* \n1- SOMA \n2- SUBTRACAO \n3-DIVISAO \n4-MULTIPLICACAO \n5- RESTO \n6- SAIR");
        scanf ("%d", &menu);
        
        
        switch (menu)
            {
                case 1:
                printf ("Operacao SOMA = %d", num1+num2);
                break;

                case 2: 
                printf ("Operacao SUBTRACAO = %d", num1-num2);
                break;

                case 3: 
                printf ("Operacao DIVISAO = %d", num1/num2);
                break;

                case 4:
                printf ("Operacao MULTIPLICACAO = %d", num1*num2);
                break;

                case 5:
                printf ("Operacao RESTO = %d", num1%num2);
                break;
                
                case 6:
                printf ("SAIR");
                loop=0;
                break;
                
            }
    }    
    }