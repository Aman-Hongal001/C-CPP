// Write a function to Reverse a string
#include<stdio.h>
char* stringRev(char*,int);
int stringLength(char*);
int main()
{
    char str[20];
    char * p;
    printf("Enter the string : \n");
    gets(str);
    int len = stringLength(str);
    p = stringRev(str,len);
    puts(p);
    return 0;
}

int stringLength(char* ptr)
{
    int i=0;
    while (ptr[i]!='\0')
        i++;
    return i;
}

// void reverseArray(int *ptr,int length)
// {
//     int temp;
//     // printf("Inside reverseArray \n");
//     for(int i=0;i<size/2;i++)
//     {
//         temp = ptr[i];
//         ptr[i] = ptr[size-i-1];
//         ptr[size-i-1] = temp;
//     }
// }

char* stringRev(char* ptr, int length)
{
    char temp;
    for(int i=0;i<length/2;i++)
    {
        temp = ptr[i];
        ptr[i] = ptr[length-i-1];
        ptr[length-i-1] = temp;
    }
    
    return ptr;
    
}