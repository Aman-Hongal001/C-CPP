// Write a program to find the multiplication tabel of a given number 

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number you want table of : \n");
    scanf("%d",&num);

    for(int i=1;i<=10;i++)
    {
        printf("%d X %d = %d\n",num,i,(num*i));
    }
    return 0;
}