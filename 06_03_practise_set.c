#include<stdio.h>
void mul(int *a);
int main(){
    int i=50;
    mul(&i); 
    printf("10 times of 50 is %d",i);
    return 0;
}
void mul(int *a){
    *a=*a*10;
}