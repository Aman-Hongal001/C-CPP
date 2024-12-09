// Take a Amount from user suppose 1000 you can accept denomination of 500 50 20 10 5 1. find the dinomination of the given amount. 
#include<stdio.h>
int main(){
    int a500=0, a50=0, a20=0, a10=0, a5=0, a1=0, num=0;
    printf("Enter the Amount : \n");
    scanf("%d",&num);
    a500 = num/500;
    a50 = (num%500)/50;
    a20 = (num%50)/20;
    a10 = ((num%50)-(20*a20))/10;
    a5 = (num%10)/5;
    a1 = (num%5)/1;

    printf("The denominations are : \n");
    printf("500 : %d\n",a500);
    printf("50 : %d\n",a50);
    printf("20 : %d\n",a20);
    printf("10 : %d\n",a10);
    printf("5 : %d\n",a5);
    printf("1 : %d\n",a1);

    return 0;
}