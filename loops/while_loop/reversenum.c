// Write a program to reverse a number 

#include<stdio.h>
int main()
{
    int num,temp,rev=0;
    printf("Enter the number to reverse \n");
    scanf("%d",&num);

     while (num>0)
    {
        temp = num%10;
        rev = (rev*10)+temp;
        num /= 10;
    }
    
    printf("Reverse is : %d",rev);
    return 0;
    
}        