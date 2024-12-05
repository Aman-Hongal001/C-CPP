// Take the Basic monthly salary from user and calulate TA, DA and HRA that is 10% , 15% and 20% of salary and all them to generate gross salary
// if the gross Salary is above 2.5L deduct 10% tax and print the salary or else print without deduction
#include<stdio.h>
int main(){
    float salary, tA, dA, hrA, grossSalary;
    printf("Enter the basic salary \n");
    scanf("%f",&salary);
    // printf("%f",salary);
    tA = salary*0.1;
    dA = salary*0.15;
    hrA = salary*.2;
    grossSalary = ((salary+tA+dA+hrA)*12);
    // printf("%f",grossSalary);
    (grossSalary > 250000)?printf("%f",(grossSalary-(grossSalary*0.1))):printf("%f",grossSalary);
    return 0;
}