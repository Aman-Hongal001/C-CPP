// Write a program to input electricity unit charge and calculate total electricity bill 
// 50 units - 0.5/unit;
// 100 unit - 0.75/unit;
// above 100 unit - 1.2/unit;
// sub charge - 20% of bill amount 
// total charge = 50+100+above 100 + sub charge;

#include<stdio.h>
int main(){

    float tUnit,tCharge,unit50,subCharge;
    printf("Enter the Total Unit readings : \n");
    scanf("%f",&tUnit);
    if(tUnit<=50)
    {
        tCharge = tUnit*0.5;
    }
    else if(tUnit<=150)
    {
        tCharge = 50*0.5;
        tUnit -= 50;
        tCharge = ((tUnit*.75)+tCharge);
        subCharge = tCharge*0.2;
        tCharge = tCharge+subCharge;
    }
    else
    {
        tCharge = (50*0.5)+(100*0.75);
        tUnit -= 150;
        tCharge = ((tUnit*1.2)+tCharge);
        subCharge = tCharge*0.2;
        tCharge = tCharge+subCharge;
    }
    printf("Total Amount to Pay : %f",tCharge);

    return 0;
}