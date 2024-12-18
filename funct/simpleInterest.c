#include<stdio.h>
void simpleInterest();
int main()
{
    simpleInterest();
    return 0;
}

void simpleInterest()
{
    float principle, rate, time, si;
    printf("Enter the data for principle, rate and time :\n");
    scanf("%f%f%f",&principle,&rate,&time);
    si = (principle*rate*time)/100;
    printf("Simple Interest is : %.2f",si);
}