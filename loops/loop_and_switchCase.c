
#include<stdio.h>
int main()
{
    int menu,num, flag, power, y, fibo, prefibo, postfibo, fact;
    char choice='y';
    

    while (choice=='y')
    {
            
        printf("\nEnter the number : \n");
        scanf("%d",&num);

        printf("Enter you choice as below mentioned menu : \n");
        printf("1 => Fibonaci series of n length : \n");
        printf("2 => Factorial of given number : \n");
        printf("3 => Power of given number : \n");
        printf("4 => Check for Prime Number : \n");
        scanf("%d",&menu);


        switch (menu)
        {
        case 1:
            fibo=-1,prefibo=1,postfibo=0;
            printf("Fibonacci Series of length %d is : ",num);
            for(int i=1;i<=num;i++)
            {
                postfibo = fibo+prefibo;
                printf("%d ",postfibo);
                // printf("%d\n",postfibo);
                fibo = prefibo;
                prefibo = postfibo;
            }
            break;
        
        case 2:
            fact=1;
            for(int i=1;i<=num;i++)
            {
                fact=fact*i;
            }
            printf("Factorial of number is : %d",fact);
            break;

        case 3:
            power=1;    
            printf("Enter the Power value y : \n");
            scanf("%d",&y);
            for(int i=1;i<=y;i++)
            {
                power=power*num;
            }
            printf("Power is %d",power);
            break;


        case 4:
            flag=0;
            for(int i=1;i<num;i++)
            {
                if(num%i==0)
                {
                    flag = 1;
                    break;
                }
                
            }
            (flag==1)?printf("Prime\n"):printf("Non-Prime\n");
            break;



        default:
            printf("Invalid Input \n");
            break;
        }
        

        printf("\nDo you Want to continue? \npress => y or n \n");
        scanf(" %c",&choice);
    }
    return 0;
    
}