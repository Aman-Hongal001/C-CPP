// Write a code to find the sum of series of given length n 
// 1/1!+ 2/2! + 3/3! + ........ .. n/n!
#include<stdio.h>
int main()
{
    int num,fact=1;
    float ans=0;
    printf("Enter the length you want sum for the series : ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        fact = fact*i;
        ans = (ans + ((float)i/fact));
    }
    printf("Answere for the series is : %.4f",ans);
    return 0;
    
}