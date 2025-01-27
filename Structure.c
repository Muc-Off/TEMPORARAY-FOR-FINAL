#include <stdio.h>

struct person
{
int age;
int salary;
};
int main(){

struct person person1,person2;
person1.age = 27;
person1.salary = 12000;

printf("Person 1 Age=%d\n & salary=%d\n",person1.age,person1.salary);
    return 0;
}