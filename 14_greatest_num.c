#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter the value of a \n");
    scanf("%d",&a);
    printf("Enter the value of b \n");
    scanf("%d",&b);
    printf("Enter the value of c \n");
    scanf("%d",&c);
    printf("Enter the value of d \n");
    scanf("%d",&d);
    int max=a;
    if(b>max){
        max=b;
    }
    if (c>max)
    {
        max=c;
    }
    if(d>max){
        max=d;
    }
    printf("Greatest number is %d",max);
    
    return 0;
}