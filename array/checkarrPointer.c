#include<stdio.h>
int main()
{
    int arr[5];
    int a = 10;
    // arr = &a;
    printf("%u\n",&arr[0]);
    printf("%u",arr);
    return 0;
}