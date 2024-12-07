// Check the given 3 digit number is palindrom or not 
#include<stdio.h>
int main()
{
    int num,o,t,h,revnum;
    printf("Enter the 3 Digit number\n");
    scanf("%d",&num);
    o = num%10;
    t = (num/10)%10;
    h = (num/100);
    revnum = (o*100)+(t*10)+(h);
    if(revnum == num)
        printf("The number is Palindrom");
    else
    printf("The number is not Palindrom");
    return 0;
}