// Identify the type of char small capital digit or special character 
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character \n");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("Character is Small");
    }
    else
    {    
        if(ch>='A' && ch<='Z')
        {
            printf("Character is Capital");
        }   
        else
        {    
            if(ch>='0' && ch<='9')
            {
                printf("It is Digit");
            }
            else
            {
                printf("Its a Special character");
            }
        }
    }
    return 0;
}