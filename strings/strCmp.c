// Write a function to compare the 2 strings 

#include<stdio.h>
char* stringUpperCase(char*);
int stringCompare(char*, char*);
int main()
{
    char str1[20],str2[20];
    int p=0;
    printf("Enter the 1st string : \n");
    gets(str1);
    printf("Enter the 2nd string : \n");
    gets(str2);
    p = stringCompare(str1,str2);
    (p)?printf("String Matched"):printf("String Unmatched");
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

int stringCompare(char* ptr1, char* ptr2)
{
    int i = 0, flag = 1;
    ptr1 = stringUpperCase(ptr1);
    ptr2 = stringUpperCase(ptr2);
    while (ptr1[i]!='\0' || ptr2[i]!='\0')
    {
        if(ptr1[i] != ptr2[i])
        {
            flag = 0;
            break;
        }
        i++;
    }

    return flag;
}