// Check the sum of 3 digit number is even or Odd 
#include<stdio.h>
int main(){
    int a,o,t,h,sum;
    printf("Enter the 3 Digit number\n");
    scanf("%d",&a);
    h = a/100;
    t = (a/10)%10;
    o = (a%100)%10;
    sum = o+t+h;
    if(sum%2==0)
        printf("The sum of digit is Even");
    else
        printf("The sum of digit is Odd");

    return 0;
}