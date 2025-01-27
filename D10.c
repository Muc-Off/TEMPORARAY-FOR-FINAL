/*Input some words and store them in a 2D array. Display only three letters/elements of each
word.*/

#include <stdio.h>
int main(){
int i,j,k,l,n;

printf("Enter how many words:");
scanf("%d",&n);

char word[n][100];

for(i=0;i<n;i++){
printf("Enter the %d word\n",i+1);
scanf("%s",& word[i]);

}

for(j=0;j<n;j++){
printf("1st three word of %d word is: ",j);
for(k=0;k<3;k++){
   printf("%c",word[j][k]); 
}
printf("\n");
}



    return 0;
}