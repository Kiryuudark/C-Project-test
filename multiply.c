#include <stdio.h>

// this function just do a multiply using function

int multiply();

int main(){
   int result;
   result = multiply();
   printf("\nResult:%d\n", result);
   return 0;
}

int multiply(){
   int num1, num2;
   printf("Type the first number to multiply: ");
   scanf("%d", &num1);
   printf("Type the second number to multiply: ");
   scanf("%d", &num2);
   return num1 * num2;
}