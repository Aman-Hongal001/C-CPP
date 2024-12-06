// Assuming the max mark is 100 Accept 3 subject marks from the user the passing marks is 35 and 
// if he fails in any subject print fails is subectname else if he fails in all print failed in all sub 
// else if he passes in all subject calculate % and provide grade if as A for <60, B for 50-59 and C for >49

#include<stdio.h>
int main(){
    int math,phy,chem,f;
    float percent=0;
    printf("Enter the Marks of Maths, Physics, Chemistry \n");
    scanf("%d%d%d",&math, &phy, &chem);
    // (math>=35 && phy>=35 && chem>=35)
    //     ? (percent=(((math+chem+phy)*100.0)/300))
    //     : printf("Fail in All");
        
    // (percent)
    //     ? printf(" ")
    //     : (math<35) ? printf("Fail in Maths")
    //                 : (phy<35) ? printf("Fail in Physics")
    //                             : (chem<35) ? printf("Fail in Chemistry")
    //                                         : printf(" 35");
    // // printf("%d",f);
    // (percent >= 60) ? printf("\nA")
    //                 : ((50 <= percent) && (percent <= 59)) ? printf("\nB")
    //                                     : ((35 <= percent) && (percent<= 49)) ? printf("\nC")
    //                                                     : printf(" ");

    // return 0;

    (math<35 && phy<35 && chem<35)
        ? printf("Fail in All")
        : (math<35 && phy>=35 && chem>=35)
            ? printf("Fail in Maths")
            : (math>=35 && phy<35 && chem>=35)
                ? printf("Fail in Physics")
                : (math>=35 && phy>=35 && chem<35)
                    ? printf("Fail in Chemistry")
                    : ((((math+chem+phy)*100.0)/300) >= 60)
                        ? printf("\nA")
                        : ((50 <= (((math+chem+phy)*100.0)/300)) && ((((math+chem+phy)*100.0)/300) <= 59)) 
                            ? printf("\nB")
                            : printf("\nC");
    return 0;
}

