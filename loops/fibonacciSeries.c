// Write a code to find the fibonacci series of n length

#include<stdio.h>
int main()
{
    int num,fibo=1,prefibo=0,postfibo=1;
    printf("Enter the length of Fibonacci Series : ");
    scanf("%d",&num);
    if(num==0)
        printf("");
    else if (num==1)
    {
        printf("0");
    }
    else
    {
        printf("%d\n",prefibo);
        printf("%d\n",fibo);
    }
    


    for(int i=3;i<=num;i++)
    {
        postfibo = fibo+prefibo;
        printf("%d\n",postfibo);
        prefibo = fibo;
        fibo = postfibo;
    }
    return 0;
}