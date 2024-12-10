// Write a program to find sum of digit of given number 

#include<stdio.h>
int main()
{
    int num,mod,sum=0;
    printf("Enter the number \n");
    scanf("%d",&num);

    for(;num>0;num=num/10)
    {
        mod = num%10;
        sum += mod;
    }
    printf("Sum is : %d",sum);
    return 0;
}