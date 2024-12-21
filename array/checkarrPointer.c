#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int a = 10;
    // arr = &a;
    printf("%u\n",&arr[0]);
    printf("%u\n",arr);
    printf("%d\n",arr[0]);
    printf("%d\n",*arr);
    *arr = 200;
    printf("%d\n",arr[0]);
    printf("%d\n",*arr);

    
    printf("%d\n",*(arr+3));
    printf("%d\n",3[arr]);

    return 0;
}