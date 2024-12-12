// Draw the below pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 12 14 15


#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter the length of pattern : ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            sum = sum+1;
            printf("%d ",sum);
        }
        printf("\n");
    }
    return 0;
}