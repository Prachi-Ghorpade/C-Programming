#include<stdio.h>

int main(){
    double celcius;
    printf("How much celcius \n");
    scanf("%lf",&celcius);

    printf("In farenheit will be %lf",(celcius*9/5)+32);

    return 0;
}