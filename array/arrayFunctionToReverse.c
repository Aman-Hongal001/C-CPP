
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
    
    int temp;
    for(int i=0;i<size;i++)
    {
        temp = ptr[i];
        ptr[i] = ptr[size-i-1];
        ptr[size-i-1] = temp;
    }
    

}

int main()
{
    int size,arr[size];
    printf("Enter size od array : ");
    scanf("%d",&size);
    scanArray(arr,size);
    reverseArray(arr,size);
    printArray(arr,size);
    return 0;
}