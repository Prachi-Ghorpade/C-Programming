#include<stdio.h>

int main(){
    int num;
    printf("Enter the number \n");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        int j=num*i;
        printf("%d \n",j);
    }

    int a=10;
    int b=10;
    while (b>0){
        int c=a*b;
        printf("%d\n",c);
        b--;
    }
    {
        /* code */
    }
        
    return 0;
}