// Write a code to check the given angles are represents a valid triangle or not

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the angles of triangle \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c == 180)
    {
        printf("The given Trianlge is Valide");
    }
    else
    {
        printf("The given Triangle is Invalid");
    }
    return 0;
}