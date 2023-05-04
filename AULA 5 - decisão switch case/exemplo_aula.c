#include <stdio.h>
int main()
{
 float num1, num2;
 char op;
 printf ("\nDigite uma expressão no formato: num op num: ");
 scanf ("%f %c %f", &num1, &op, &num2);
 switch ( op ) 
 {
 case '+':
 printf (" = %f", num1+num2); break;
 case '-':
 printf (" = %f", num1-num2); break;
 case '*':
 case 'x':
 printf (" = %f", num1*num2); break;
 case '/':
 printf (" = %f", num1/num2); break;
 default:
 printf ("\nOperador desconhecido");
 }
 }