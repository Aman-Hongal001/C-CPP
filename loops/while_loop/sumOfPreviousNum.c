// Write a program to find the sum of the int numbers of the previous number including the given number 
#include<stdio.h>
int main()
{
    int num,sum=0,i=0;
    printf("Enter the number : \n");
    scanf("%d",&num);

    while(i<=num)
    {
        sum += i;
        i++;
    }
    
    printf("Sum is %d",sum);
    return 0;
} 