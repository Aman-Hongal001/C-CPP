// Find the power of a given number with the input of number and power value 

#include<stdio.h>
int main()
{
    int x,y,power=1;
    printf("Enter the num and power value : \n");
    scanf("%d%d",&x,&y);
    for(int i=1;i<=y;i++)
    {
        power=power*x;
    }
    printf("Power is %d",power);
    return 0;
}