/*
Input a string in all upper case format and find which vowels appear the most. */
#include <stdio.h>
int main(){
char x[100];
int i,p,c[5],j,m;
gets (x);
p=strlen(x);

for(i=0;i<p;i++){
          if(x[i]=='A'){c[0]++;}
     else if(x[i]=='E'){ c[1]++;}
     else if( x[i]=='I' ){c[2]++;}
       else if ( x[i]=='O' ){c[3]++;}
        else if ( x[i]=='U') {c[4]++;}
    }
    m=0;
for(j=0;j<5;j++){
    if(c[i]>m){
        m=c[i];
    }
}
if(m=c[0]){
    printf("A");
}
else if(m=c[1]){
    printf("E");
}
else if(m=c[2]){
    printf("I");
}
else if(m=c[3]){
    printf("O");
}
else if(m=c[4]){
    printf("U");
}

printf("%d",m);
return 0;
}
