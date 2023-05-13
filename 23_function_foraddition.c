#include<stdio.h>
int add(int a,int b);

int main(){
    int result=add(3,6);
    printf("Additio of a and b is %d",result);
    return 0;
}
int add(int a,int b){
    int c;
    c=a+b;
    return c;
}