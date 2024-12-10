// Write a program to find the sum of the int numbers of the previous number including the given number 
#include<stdio.h>
int main()
{
    int num,sum=0,i=0;
    printf("Enter the number : \n");
    scanf("%d",&num);

    do
    {
        i++;
        sum += i;
    } while (i<num);
    
    printf("Sum is %d",sum);
    return 0;
} 