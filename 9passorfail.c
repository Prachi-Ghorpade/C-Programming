#include<stdio.h>

int main(){
    int maths,chem,phy;
    printf("Enter the maths marks \n");
    scanf("%d",&maths);
    printf("Enter the chem marks \n");
    scanf("%d",&chem);
    printf("Enter the phy marks \n");
    scanf("%d",&phy);

    double perc=(maths+chem+phy)/3;
    if (maths>=33 && chem>=33 && phy>=33 && perc>=40)
    {
        printf("Cogradulations you got %lf and you pass the exam",perc);
    }
    else
    {
        printf("You got %lf so you fail the exam",perc);
    }
    
    return 0;
}