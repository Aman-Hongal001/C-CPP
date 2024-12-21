// Write a code to reverse a array 
#include<stdio.h>

void swapArr(int*,int*);

int main()
{
    int size;
    printf("Enter the size of array : \n");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements of array : \n");    
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);

    for(int i=0;i<(size/2);i++)
        swapArr(&(arr[i]),&(arr[size-i-1]));
    
    
    printf("Array after reverse is : \n");
    for(int i=0;i<size;i++)
        printf("%d\n",arr[i]);

    return 0;
}


void swapArr(int* ptr1,int* ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

}