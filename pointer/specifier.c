// pointer uses %u specifier to display the pointer address 
#include<stdio.h>
int main()
{
    int a =10;
    int *ptr = &a;
    printf("%u",ptr);
    return 0;
    
}