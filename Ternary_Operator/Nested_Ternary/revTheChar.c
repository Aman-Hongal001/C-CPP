// we need to reverse the char if it a - A or A-a if other than this char if the user enters digit or special char it should display invalid char 
#include<stdio.h>
int main(){
    char ch;
    printf("Enter the char: \n");
    scanf("%c",&ch);
    (ch >= 'a' && ch <= 'z')
        ? printf("%c",(ch - 32))
        : (ch >= 'A' && ch <= 'Z')
            ? printf("%c",(ch + 32))
            : printf("Invalid Character");
    return 0;
}