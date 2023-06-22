#include<stdio.h>

void table(int *arr,int num){
    printf("Table of %d is:",num);
    for(int i=0;i<10;i++){
        arr[i]=num*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("%d*%d = %d",num,i+1,arr[i]);
    }
printf("**************************************\n\n");
}

int main(){
    int arr [3][10];
    table(arr[0],2);
    table(arr[1],7);
    table(arr[2],9);
    return 0;
}