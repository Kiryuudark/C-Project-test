#include <stdio.h>

//this function return a factorial value using recurvisity function.

int factorial (int value);

int main () {

    int value;
    printf("type a number: ");
    scanf("%d", &value);
    printf("Result is: %d\n",factorial(value));
    return 0;
}

int factorial (int value){
    if (value>1){
        return value * factorial(value-1);
    }
    else{
        return 1;
    }
}