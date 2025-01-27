/*1. Write a C program to display factorial of a number using recursion.
*/
#include <stdio.h>

int fact(int n){
    if(n==0 || n==){ return 1;}
    else {
       return n * fact(n-1);
    }
}

int main(){
int x;

printf("Enter the number:");
scanf("%d",&x);

 printf("Factorial of %d is %d\n", x, factorial(x));
    return 0;
}