#include<stdio.h>

int main(){
    int num;
    printf("Enter the number \n");
    scanf("%d",&num);

    if (num%2==0)
    {
        printf("%d is even \n",num);
    }
    else{
        printf("%d is odd \n",num);
    }
    
    //Conditional or ternary Operator
    
    (num>5)? printf("number is greater than 5"):printf("number is less than 5");
    return 0;
}