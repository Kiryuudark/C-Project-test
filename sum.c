#include <stdio.h>

int main(){
   int result;
   result = add();
   printf("\nResult:%d\n", result);
   return 0;
}

int add(){
   int num1, num2;
   printf("Type the first number to sum: ");
   scanf("%d", &num1);
   printf("Type the second number to sum: ");
   scanf("%d", &num2);
   return num1 + num2;
}