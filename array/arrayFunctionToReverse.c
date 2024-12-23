
#include<stdio.h>

void scanArray(int *ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        // both will work 
        scanf("%d",&ptr[i]);
        // scanf("%d",(ptr+i));
    }
}

void printArray(int *ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        // all will work 
        printf("%d\n",ptr[i]);
        // printf("%d\n",*(ptr+i));
        // printf("%d\n",i[ptr]);
    }
}

void reverseArray(int *ptr,int size)
{
    int temp;
    // printf("Inside reverseArray \n");
    for(int i=0;i<size/2;i++)
    {
        temp = ptr[i];
        ptr[i] = ptr[size-i-1];
        ptr[size-i-1] = temp;
    }
}

int main()
{
    int size;
    printf("Enter size od array : ");
    scanf("%d",&size);
    int arr[size];

    printf("Enter Elements of array : \n");
    scanArray(arr,size);

    reverseArray(arr,size);

    printf("Array is : \n");
    printArray(arr,size);
    
    return 0;
}