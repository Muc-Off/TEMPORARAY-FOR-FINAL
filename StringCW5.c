/*Input a string and display how many words are starting with an 'A' or 'a'*/
#include <stdio.h>
int main(){
char x[100];
int p,i,c=0;
printf("Enter the sentence:");
gets (x);
p=strlen(x);

for(i=0;i<p;i++){
    if(x[i]=='a' || x[i]=='A'){
        c++;
    }

for(i=0;i<p;i++){
    if(x[i]==' ' && x[i+1]=='a' || x[i+1]=='A'){
        c++;
    }
}
printf("%d",c);
return 0;}
