// Write a function to print the str to LowerCase 
#include<stdio.h>
char* stringUpperCase(char*);
int main()
{
    char str[20];
    char * p;
    printf("Enter the string : \n");
    gets(str);
    p = stringUpperCase(str);
    puts(p);
    return 0;
}

char* stringUpperCase(char* ptr)
{
    int i=0;
    while (ptr[i]!='\0')
    {
        if(ptr[i] >= 'A' && ptr[i] <= 'Z')
            ptr[i] += 32;
        i++;

    }
    
    return ptr;
    
}