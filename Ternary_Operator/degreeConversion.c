#include<stdio.h>
int main(){
    int a = 9, b = 5;
    float D, F;
    printf("Enter the Degree: ");
    scanf("%f",&D);
    // F = D*9/5+32;
    // F = (9.0/5)*D+32;
    F = (((float)a)/b)*D+32;
    printf("%f F",F);
    return 0;
}