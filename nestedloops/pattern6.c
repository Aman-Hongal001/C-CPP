// Draw the below pattern
//     a
//    b c
//   d e f
//  g h i j
// k l m n o
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
            ch = ch+1;
        }
        printf("\n");
    }
    return 0;
}