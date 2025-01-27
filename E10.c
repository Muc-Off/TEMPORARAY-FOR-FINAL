/*Create a structure called "Athlete" with fields for name, sport, and medals won. Write a C
program to input data for five athletes, then display the athlete who has won the most medals.*/

#include <stdio.h>

struct Athlete 
{
char name[100];
char sport[100];
int medals ;
};

int main(){
     struct Athlete ath[5];
int i,j,k,max=0,index=0;

for(i=0;i<5;i++){
    printf("Enter %d players name,sport & won medals:\n",i+1);
    scanf("%s",ath[i].name);
    scanf("%s",ath[i].sport);
    scanf("%d",& ath[i].medals);
}

for(j=0;j<5;j++){
    if(ath[j].medals >= max){
            max=ath[j].medals ;
            index=j;
}
}

printf("The athlete with the most medals is %s (%s), with %d medals.\n", 
           ath[index].name, ath[index].sport, max);

    return 0;
}