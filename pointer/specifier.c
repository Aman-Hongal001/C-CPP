// pointer uses %u specifier to display the pointer address 
#include<stdio.h>
int main()
{
    int a =10;
    int *ptr = &a;  //the pointer is made only to store address of int it won't accept address of other datatype
    printf("%u",ptr);
    return 0;

}