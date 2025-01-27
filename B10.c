/*10. Write a C program which can input a word and display in which places upper case letter
exist.*/
#include <stdio.h>
int main(){
char x[100];
int i,p;
printf("Enter a word:");
gets(x);
// scanf("%s",&x);//
p=strlen(x);

for(i=0;i<p;i++){
    if(x[i] >='A' && x[i] <='Z'){
        printf("The position are: %d\n",i+1);
    }
}





    return 0;
}