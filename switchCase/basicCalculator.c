// Write a program for basic calculations of addition substraction multiplication and division 
#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter the number of a and b \n");
    scanf("%d%d",&a,&b);
    // getchar();
    printf("Enter the Operation + - * or / \n");
    scanf(" %c",&op);
    // printf("%c",op);
    switch (op)
    {
    case '+':
        printf("Answere is : %d",(a+b));
        break;
    
    
    case '-':
        printf("Answere is : %d",(a-b));
        break;
        
    case '*':
        printf("Answere is : %d",(a*b));
        break;
        
    case '/':
        printf("Answere is : %d",(a/b));
        break;
    default:
        printf("Invalid Input");
        break;
    }


    return 0;
}