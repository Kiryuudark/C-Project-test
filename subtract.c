#include <stdio.h>

int main(){
   int result;
   result = subtract();
   printf("\nResult:%d\n", result);
   return 0;
}

int subtract(){
   int num1, num2;
   printf("Type the first number to subtract: ");
   scanf("%d", &num1);
   printf("Type the second number to subtract: ");
   scanf("%d", &num2);
   return num1 - num2;
}