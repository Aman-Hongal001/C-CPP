// Write a program to take the price and quatity of the the product if the quantity is greater than 500 than deduct the discount of 10%
// from total price or else dont.

#include<stdio.h>
int main(){
    int qty;
    float price,totalPrice;
    printf("Enter the Price and Quantity of the Product : \n");
    scanf("%f%d",&price,&qty);
    totalPrice = price*qty;
    if(qty>=500)
    {
        totalPrice -=(totalPrice*0.1);
    }
    printf("You need to pay : %f",totalPrice);
    return 0;
}