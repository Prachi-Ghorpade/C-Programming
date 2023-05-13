#include<stdio.h>

int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    int count=0;

    for(int a=2;a<num;a++){
        if(num%a==0){
            count++;
        }
    }
    if(count==0){
        printf("%d is a prime number",num);
    }
    return 0;
}