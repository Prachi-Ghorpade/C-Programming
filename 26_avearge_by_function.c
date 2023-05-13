#include<stdio.h>
void average(int a,int b,int c);

int main(){
    int a,b,c;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    printf("Enter the value of c\n");
    scanf("%d",&c);
    average(a,b,c);    
    return 0;
}

void average(int a,int b,int c){ 
    float avg=(float)(a+b+c)/3;

    printf("Average of %d,%d,%d is %f",a,b,c,avg);  
  
}