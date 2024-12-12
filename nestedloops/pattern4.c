// Draw the below pattern
//     1
//    2 2
//   3 3 3
//  4 4 4 4
// 5 5 5 5 5
#include<stdio.h>
int main()
{
    int num;
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
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}