// Write a function to concaniate/add the 2 string 
#include<stdio.h>

int stringLength(char* ptr)
{
    int i=0;
    while (ptr[i]!='\0')
        i++;
    return i;
}

char* stringCopy(char* merge, char* needtoadd, int length)
{
    int i=0;
    
    while (needtoadd[i]!='\0')
    {
        merge[length+i] = needtoadd[i];
        i++;
    }
    merge[length+i] = '\0';

    return merge;
    
}

int main()
{
    char str1[50],str2[20];
    char* p;
    printf("Enter the 1st String : \n");
    gets(str1);
    printf("Enter the 2nd String : \n");
    gets(str2);
    int len = stringLength(str1);
    p = stringCopy(str1,str2,len);
    puts(p);
    return 0;
}