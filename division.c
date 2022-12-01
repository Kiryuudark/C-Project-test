#include <stdio.h>

// this function just do a simple division and show result

int main(){
   float num1, num2;
   printf("Type the first number to divide: ");
   scanf("%f", &num1);
   printf("Type the second number to divide: ");
   scanf("%f", &num2);
   printf("Result is %f\n",(num1/num2));
   return 0;
}