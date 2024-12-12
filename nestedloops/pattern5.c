// Draw the below pattern
//     a
//    b b
//   c c c
//  d d d d
// e e e e e
#include<stdio.h>
int main()
{
    int num;
    char ch = 'a';
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
            printf("%c ",ch);
        }
        printf("\n");
        ch = ch+1;
    }
    return 0;
}