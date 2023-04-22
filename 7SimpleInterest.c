#include<stdio.h>

int main(){
    double principal,rate,years;
    printf("Enter Principal Amaount \n");
    scanf("%lf",&principal);

    printf("Enter rate \n");
    scanf("%lf",&rate);

    printf("Enter years \n");
    scanf("%lf",&years);

    double simpleInterest=(principal*rate*years)/100;

    printf("Simple Interest is %lf", simpleInterest);

    return 0;
}