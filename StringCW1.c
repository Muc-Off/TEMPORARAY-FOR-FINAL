/*Input a string and change it all upper case format*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char x[100];
    int p ,i,j;\
    printf("Enter a name");
gets (x);
p=strlen(x);

for(i=0;i<p;i++){
   if ( x[i] >='a' && x[i] <='z' ){
    x[i] = x[i] + 32 ; }
}
puts (x);
    return 0;
}