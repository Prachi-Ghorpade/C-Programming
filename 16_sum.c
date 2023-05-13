#include<stdio.h>

int main(){   
    int num=1;
    int sum=0;
    while (num<=10)
    {
        sum=sum+num;
        num++;
    }
    printf("Sum of first 10 numbers is %d\n",sum);
    ////////////////////////////////////////////////
    sum=0;
    for(int a=1;a<=10;a++){
        sum=sum+a;
    }
    printf("Sum of first 10 numbers is %d\n",sum);
    ////////////////////////////////////////////////
    sum=0;
    int b=1;
    do{
        sum=sum+b;
        b++;
    }
    while(b<=10);
    printf("Sum of first 10 numbers is %d\n",sum);

    return 0;
}