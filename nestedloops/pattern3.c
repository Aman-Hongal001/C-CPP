// Draw the below pattern
//     *
//    * *
//   * * *
//  * * * *
// * * * * *
#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter the length of pattern : ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        for(int k=num;k>i;k--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}