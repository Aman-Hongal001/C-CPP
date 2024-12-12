// Write a program to find the factorial of number 
#include<stdio.h>
int main()
{
    int num,fact=1;
    printf("Enter the number you want factorial of : ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of number is : %d",fact);
    return 0;
}