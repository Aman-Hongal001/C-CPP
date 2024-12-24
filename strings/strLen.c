// Write a function to print the length of string 
#include<stdio.h>
int stringLength(char*);
int main()
{
    char str[20];
    printf("Enter the string : \n");
    gets(str);
    int length = stringLength(str);
    printf("The length of the string : %s is %d",str,length);
    return 0;
}

int stringLength(char* ptr)
{
    int i=0;
    while (ptr[i]!='\0')
        i++;
    
    return i;
    
}