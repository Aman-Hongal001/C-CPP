
#include<stdio.h>

void scanArray(int *ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("Enter Elements of array : \n");
        // both will work 
        scanf("%d",&ptr[i]);
        // scanf("%d",(ptr+i));
    }
}

void printArray(int *ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("Array is : \n");
        // all will work 
        printf("%d\n",ptr[i]);
        // printf("%d\n",*(ptr+i));
        // printf("%d\n",i[ptr]);
    }
}

void reverseArray(int *ptr,int size)
{

}

int main()
{
    int size,arr[size];
    printf("Enter size od array : ");
    scanf("%d",&size);
    scanArray(arr,5);
    reverseArray(arr,size);
    printArray(arr,5);
    return 0;
}