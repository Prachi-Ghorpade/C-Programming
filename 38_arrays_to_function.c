#include<stdio.h>
void printArray(int *ptr,int n){
    for(int a=0;a<n;a++){
        printf("value of element %d is %d\n",a+1,*(ptr+a));
    }
}
////////////////////OR/////////////////////////
void printArray(int ptr[],int n){
    for(int a=0;a<n;a++){
        printf("value of element %d is %d\n",a+1,ptr[a]);
    }
}
int main(){
    int arr[]={12,588,60,13,65,31};
    printArray(arr,6);
    return 0;
}