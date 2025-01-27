/*Input a string and display how many words are ending with an 'A' or 'a'*/
#include <stdio.h>
int main(){
char x[100];
int p,i,c=0;
printf("Enter the sentence:");
gets (x);
p=strlen(x);



for(i=0;i<p;i++){
    if(x[i+1]==' ' || x[i + 1] == '\0')&& (x[i]=='a' || x[i]=='A' ){
        c++;
    }
}

printf("%d",c);
return 0;}

