// Write a program to find sum of digit of given number 

#include<stdio.h>
int main()
{
    int num,mod,sum=0;
    printf("Enter the number \n");
    scanf("%d",&num);
    if(num>0){
        do{
            mod = num%10;
            sum += mod;
            num = num/10;

        }while(num>0);
        
        printf("Sum is : %d",sum);
    }
    else
        printf("Invald Input\n");
    
    return 0;
}