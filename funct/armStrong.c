// Check the given number is armstrong or not 
// to check criteria are : 
//         step 1 : suppose given number is 123
//         step 2 : find 1^3 + 2^3 + 3^3 == 123 than it is armstrong or else not a armstrong 
//         if its 4 digit number 2445 than 2^4 + 4^4 + 4^4 + 5^4;

#include<stdio.h>

int findCount(int num)
{
    int count=0,temp=0;
    while (num>0)
    {
        temp = num%10;
        num = num/10;
        if(temp!=0)
            count += 1;
    }
    // printf("Count of count function : %d\n",count);
    return count;
}

int powerOfNumber(int a, int b)
{
    int power=1;
    for (int i = 1; i <= b; i++)
    {
        power *= a;
    }
    
    // printf("POwer of power function for x : %d , y: %d and power : %d\n",a,b,power);
    return power;
}

void armStrong(int no)
{
    int oriNum = no, digit, multiOfDigit=0;
    int digitCount = findCount(no);
    while (no>0)
    {
        digit = no%10;
        multiOfDigit += powerOfNumber(digit,digitCount);
        no /= 10;
        // printf("multidigti count is : %d\n",multiOfDigit);
    }
    (multiOfDigit == oriNum)?printf("Number a Armstrong"):printf("Numbe is not a Armstrong");
}

int main()
{
    int number;
    printf("Enter a number to check for Armstrong : ");
    scanf("%d",&number);
    armStrong(number);
    return 0;
}