#include<stdio.h>
int factorial (int a);

int main(){
    int a=5;
    printf("Factorial of %d is %d",a,factorial(a));
    return 0;
}

int factorial (int a){
    
    if(a==1 || a==0){
        return 1;
    }
    else{
        return a*factorial(a-1);
    }
}