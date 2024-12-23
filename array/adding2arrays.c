// write a program to add 2 arrays using functions and display the result in 3rd array 

#include<stdio.h>

void scanArray(int *ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        scanf("%d",&ptr[i]);
    }
}

void printArray(int *ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\n",ptr[i]);
    }
}

int* sumOfArray(int *ptr1,int *ptr2,int *ptr3,int size)
{
    // int sum[size];
    // printf("Inside sumOfArray \n");
    for(int i=0;i<size;i++)
    {
        ptr3[i] = ptr1[i]+ptr2[i];
    }
    // printf("Array SUm is \n");
    // printArray(sum,size);
    // for(int i=0;i<size;i++)
    //     printf("%d\n",sum[i]);
    return ptr3;
}

int main()
{
    int size;
    printf("Enter size od array : ");
    scanf("%d",&size);
    int arr1[size],arr2[size],arr3[size];
    int *arrSum;

    printf("Enter Elements of array1 : \n");
    scanArray(arr1,size);
    printf("Enter Elements of array2 : \n");
    scanArray(arr2,size);

    arrSum = sumOfArray(arr1,arr2,arr3,size);

    printf("Array is : \n");
    printArray(arrSum,size);
    
    return 0;
}