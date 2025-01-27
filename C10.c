/*10. Write a C program to input daily calorie intake for 4 individuals over 7 days and display the
individual with the highest weekly calorie consumption.*/

#include <stdio.h>
int main(){
int cal[4][7],total[4],max=0,person=0,i,j,k,l; // cal[person][7 days]

for(i=0;i<4;i++){
    printf("Enter %d persons calorie:\n",i);

    for(j=0;j<7;j++){
        printf("Enter %d day calorie:\n",j);
        scanf("%d",&cal[i][j]);
        total[i] += cal[i][j];
            }
}

for(k=0;k<4;k++){

    if( total[k] > max){
        max=total[k];
        person = k+1;
    }
}

printf("Highest cal consumed by %d person & cal=%d\n",person,max);






    return 0;
}