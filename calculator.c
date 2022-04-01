#include <stdio>
#include <stdlib>

int main()
{

   /* Declaing the variables that will be used */
   double num1; 
   double num2;
   char op;
   
   /* Output and Input for the calculator */
   prinf("Enter a number: ");
   scanf("%lf", &num1);
   printf("Enter an operator: );
   scanf("% c", &op);
   prinf("Enter a number: ");
   scanf("%lf", &num2);
   
   /* Doing the math using the operators i.e. +, -, /, * */
   if (op == '+')
   {
      printf("%f", num1 + num2);
   }
   else if (op == '-')
   {
      printf("%f", num1 - num2);
   }
   else if (op == '/')
   {
      printf("%f", num1 / num2);
   }
   else if (op == '*')
   {
      printf("%f", num1 * num2);
   }
   else 
   {
      printf("Syntax Error !!!");
   } 
   
   return 0;
}
