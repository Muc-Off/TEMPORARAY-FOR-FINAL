/*Input a sentece and find how many words are there.*/

#include <stdio.h>
int main(){
char x[100];
int p,i,c=0;
printf("Enter the sentence:");
gets (x);
p=strlen(x);
for(i=0;i<p;i++){
    if(x[i]==' ' && x[i+1]!=' '){
        c++;
    }
}
printf("%d",c+1);
return 0;}
