// Write a program to reverse a number 

#include<stdio.h>
int main()
{
    int num,temp,rev=0;
    printf("Enter the number to reverse \n");
    scanf("%d",&num);

    for(;num>0;num=num/10)
    {
        temp = num%10;
        rev = (rev*10)+temp;
    }
    
    printf("Reverse is : %d",rev);
    return 0;
    
}        