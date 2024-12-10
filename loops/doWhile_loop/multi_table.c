// Write a program to find the multiplication tabel of a given number 

#include<stdio.h>
int main()
{
    int num,i=0;
    printf("Enter the number you want table of : \n");
    scanf("%d",&num);

    do
    {
        i++;
        printf("%d X %d = %d\n",num,i,(num*i));
    }while (i<10);
    
    return 0;
}