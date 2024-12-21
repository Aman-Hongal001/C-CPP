//  * indicates => value of the variable data  means suppose we have a = 10 and a ponter that stores address of a than when we print ptr it will display address of a 
// similarly when we print (*ptr) it will say or indicate that : value of ptr => indicates address of a, and * => indicates value of address of a that is => 10

// &a indicates => address of a 
// if we have *& combine that they will cancel each other has * indicates value and & indicates address => so value at 100 address is 10 and 10 address is 100 is same 

#include<stdio.h>
int main()
{
    int a = 10;                 //value of a is 10 and is of type int
    int *ptr1 = &a;             //value of ptr1 is address of a and  of type int *
    int **ptr2 = &ptr1;         //value of ptr2 is address of ptr1 and  of type int **
    int ***ptr3 = &ptr2;        //value of ptr3 is address of ptr2 and  of type int ***

    printf("value of a is : %d\n",a);
    printf("address of a and value of ptr1 is : %u\n",ptr1);
    printf("address of ptr1 value of ptr2 is : %u\n",ptr2);
    printf("address of ptr2 value of ptr3 is : %u\n",ptr3);
    printf("address of ptr3 is : %u",&ptr3);

    printf("%d: is ans for a\n",a);              //this will print 10 as a contains 10

    // printf("%u\n",*a);          //this i sgoing to give error because value of a is means value of 10 or value of int is nothing

    // printf("%d\n",**ptr1);      //this also gives error because ptr => stores address of a && value at address of a => 10 && value of 10 is nothing  
    
    printf("%u: is ans for *ptr2 \n",*ptr2);          //this will print address of a because ptr2 => adress of ptr1 => ptr1 has address of a
    
    printf("%d: is ans for ***ptr3 \n",***ptr3);        //this will print 10 as ptr3 has address of ptr2 => ptr2 has adress of ptr1 => ptr1 has address of a => value at a is 10
    
    printf("%u: is ans for ptr3 \n",ptr3);           //this will print address of ptr2 because ptr3 has stored address of it
    
    printf("%u: is ans for *&*&**ptr3 \n",*&*&**ptr3);     //this will print address of a => ptr3 has address of ptr2 => ptr2 has address of ptr1 => ptr1 has address of a and *& get cancel each other 
    
    printf("%u: is ans for **&ptr2 \n",**&ptr2);        //this will print address of a
    
    printf("%u: is ans for *ptr3 \n",*ptr3);          //this will print address of ptr1
    
    printf("%u: is ans for &a \n",&a);             //this will print address of


    return 0;
}