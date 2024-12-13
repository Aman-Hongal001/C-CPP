// Write a program to print the range of prime number fro 1- n 
#include<stdio.h>
int main()
{
    int num, flag=0;
    printf("Enter the range from 1 - ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        flag = 0;
        for (int j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                flag = 1;
                break;
            }
            
        }
        if (flag == 0)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}