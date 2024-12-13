// Draw the below pattern
//     *
//    * *
//   * * *
//  * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *
    
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the size of pyramid : ");
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
    for(int i=1;i<=num;i++)
    {
        for(int k=i;k>0;k--)
        {
            printf(" ");
        }
        for(int j=num;j>i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
