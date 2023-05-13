#include<stdio.h>

int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    int fac=1;
    for(int a=num;a>1;a--){
        fac=fac*a;
    }
    printf("Factorial of it is %d",fac);
    return 0;
}