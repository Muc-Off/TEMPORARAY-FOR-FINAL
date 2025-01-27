/*2. Write a C program to calculate the power of a number (a^b) using recursion.*/

#include <stdio.h>

int power(int base, int exponent){ 
if(exponent==0){
    return 1;
}
else {
    return base*power(base,exponent-1);
}
}

int main(){
int a,b;

printf("Enter the base:");
scanf("%d",&a);

printf("Enter the exponent:");
scanf("%d",&b);

printf("%d^%d = %d",a,b,power(a,b));

    return 0;
}