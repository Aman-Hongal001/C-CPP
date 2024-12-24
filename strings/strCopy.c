// Write a function to copy the string from 1 to another 
#include<stdio.h>

char * stringCopy(char* dest, char* src)
{
    int i=0;
    while (src[i]!='\0')
    {
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0';
    return dest;
}

int main()
{
    char src[20],srcCopy[20];
    char* p;
    printf("Enter the String : \n");
    gets(src);
    p = stringCopy(srcCopy,src);
    puts(p);
    return 0;
}