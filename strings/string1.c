#include<stdio.h>
int main()
{
    char name[20];
    printf("Enter name : ");
    // scanf("%s",name);
    gets(name);
    printf("Your name is %s\n",name);
    puts(name);
    return 0;
}