#include<stdio.h>
void mul(int a){
    a=a*10;
    printf("value of 10 times of a is %d\n",a);
}
int main(){
    int a=10;
    mul(a);
    return 0;
}