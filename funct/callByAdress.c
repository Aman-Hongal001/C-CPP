// Swapping a number 
#include<stdio.h>
void swapNumber(int* ,int* );
int main()
{
    int a,b;
    printf("Enter values of a and b :\n");
    scanf("%d%d",&a,&b);
    // printf("a=%d \n b=%d",a,b);
    swapNumber(&a,&b);
    printf("a=%d \nb=%d",a,b);
    return 0;
}

void swapNumber(int* ptr1,int* ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}