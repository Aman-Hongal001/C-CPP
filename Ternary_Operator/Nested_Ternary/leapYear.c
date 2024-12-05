// To check wheather the given year is leap year or not
#include<stdio.h>
int main(){
    int yr;
    printf("Enter the year : \n");
    scanf("%d",&yr);
    (yr%4==0 || yr%100==0 || yr%400==0)?printf("Leap Year"):printf("Not a Leap Year");
    return 0;
}