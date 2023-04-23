#include<stdio.h>

int main(){
    double income_tax;
    double tax=0,income;
     
    printf("Enter the income \n");
    scanf("%lf",&income);

    // if (income<250000.0){
    //     printf("No Tax \n");
    // }     
    if (income>250000 && income<=500000){
        tax=5;
        income_tax=(tax/100)*(income-250000);        
        printf(" %lf percent tax is applicable \n",tax);
        printf("Pay %lf income tax \n",income_tax);
    }
    if (income>500000 && income<=1000000){
        tax=20;
        income_tax=(tax/100)*(income-500000);        
        printf(" %lf percent tax is applicable \n",tax);
        printf("Pay %lf income tax \n",income_tax);
    }
    if (income>1000000){
        tax=30;
        income_tax=(tax/100)*(income-1000000);        
        printf(" %lf percent tax is applicable \n",tax);
        printf("Pay %lf income tax",income_tax);
    }
    
    return 0;
}