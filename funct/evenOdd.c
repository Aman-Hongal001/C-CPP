#include<stdio.h>
int evenOdd(int no);
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    evenOdd(num);
}

int evenOdd(int no)
{
    (no%2==0)?printf("Even"):printf("Odd");
}