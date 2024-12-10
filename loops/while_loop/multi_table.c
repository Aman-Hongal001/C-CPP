// Write a program to find the multiplication tabel of a given number 

#include<stdio.h>
int main()
{
    int num,i=1;
    printf("Enter the number you want table of : \n");
    scanf("%d",&num);

    while (i<10)
    {
        printf("%d X %d = %d\n",num,i,(num*i));
    }
    return 0;
}