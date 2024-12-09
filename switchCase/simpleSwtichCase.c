// Simple switch case Problem 
#include<stdio.h>
int main()
{
    int num;
    printf("1 -> Hello\n");
    printf("2 -> Welcome\n");
    printf("3 -> Bye\n");
    scanf("%d",&num);

    switch (num)
    {
    case 1:
        printf("Hello");
        break;
    
    case 2:
        printf("Welcome");
        break;
    
    case 3:
        printf("Bye");
        break;
    
    default:
    printf("Invalid Entry");
        break;
    }

    return 0;
}