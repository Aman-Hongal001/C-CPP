// Write a program to check for prime number 

#include<stdio.h>
int main()
{
    int num,flag=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            flag = 1;
            break;
        }
        
    }
    (flag==1)?printf("Prime\n"):printf("Non-Prime\n");
            
}