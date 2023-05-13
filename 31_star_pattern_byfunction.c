#include<stdio.h>
int star(int n){
    for(int row=1;row<=n;row++){
        for(int col=1;col<=(2*row)-1;col++){
            printf("*");
        } 
        printf("\n"); 
    }
}

int main(){
    int n;
    printf("Enter the number of row : ");
    scanf("%d",&n);
    star(n);
    return 0;
}