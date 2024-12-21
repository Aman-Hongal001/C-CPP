// take the input from the array and sum the each element from array 

#include<stdio.h>
int main()
{
    int arr[5],sum=0;
    printf("Enter the element of array of size 5 : \n");
    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);
    
    for(int i=0;i<5;i++)
        sum += arr[i];
    
    printf("The sum elements of array is : %d",sum);
    return 0;
}