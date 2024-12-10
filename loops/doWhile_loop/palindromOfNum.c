// Write a program to get the palindrom of a number 

#include<stdio.h>
int main()
{
    int num,temp,ori,rev=0;

    printf("Enter the number : \n");
    scanf("%d",&num);
    ori=num;
    
    do
    {
        temp = num%10;
        rev = (rev*10)+temp;
        num = num/10;
    }while(num>0);

    if(ori==rev)
        printf("The number is palindrom");
    else
        printf("The number is not a palindrom");
    
    return 0;
}