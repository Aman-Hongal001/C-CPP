// Assuming the max mark is 100 Accept 3 subject marks from the user the passing marks is 35 and 
// if he fails in any subject print fails is subectname else if he fails in all print failed in all sub 
// else if he passes in all subject calculate % and provide grade if as A for <60, B for 50-59 and C for >49

#include<stdio.h>
int main(){
    int math,phy,chem;
    printf("Enter the marks for Maths Physics and Chemistry : \n");
    scanf("%d%d%d",&math,&phy,&chem);
    if (math<35 && phy<35 && chem<35)
        printf("Fail in All");
    
    else if((math<35 && phy>=35 && chem>=35))
        printf("Fail in Maths");

    else if(math>=35 && phy<35 && chem>=35)
        printf("Fail in Physics");
    
    else if(math>=35 && phy>=35 && chem<35)
        printf("Fail in Chemistry");

    else if((((math+chem+phy)*100.0)/300) >= 60)
        printf("\nA");

    else if((50 <= (((math+chem+phy)*100.0)/300)) && ((((math+chem+phy)*100.0)/300) <= 59)) 
        printf("\nB");
    
    else
        printf("\nC");
                            
    return 0;
}