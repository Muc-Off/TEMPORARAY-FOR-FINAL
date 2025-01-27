/* 10. Write a C program which can input some products price and weight. Display the price/unit of
the most expensive item. */

#include <stdio.h>
int main(){
int x[100],y[100],i,c=0,n,m=0,p=0;

printf("Enter how many products: ");
scanf("%d",&n);
printf("Enter the products price and weight");

    for(i=0;i<n;i++){
        scanf("%d%d",&x[i],&y[i]);
    if(x[i] >m){
        m=x[i];
        p=x[i]/y[i];
    }
    }


printf("The highest value : %d\n",p);


    return 0;
}