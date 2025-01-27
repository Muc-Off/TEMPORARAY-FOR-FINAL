/*Input a string and check whether it is a palindromic word.*/

#include <stdio.h>
int main(){
char x[100];
int i,p,a=0,q,b=0,c=0,d=0,e=0,flag=0;
gets (x);
p=strlen(x);
q=p;
for(i=0;i<q/2;i++){
    if(x[i]!=x[p-1]){

        flag=1;
        break;
}
     p--;
    }
    if(flag==1){
        printf("not");
    }
    else {printf("Yes");}
    return 0;
}
