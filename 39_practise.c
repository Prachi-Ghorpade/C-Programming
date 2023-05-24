#include<stdio.h>
void readArray(int ptr[],int n){
    for(int i=0;i<n;i++){
        printf("value of element %d is %d\n",i+1,ptr[i]);
    }
}
int main(){
    int arr[]={2,24,15,60,14};
    readArray(arr,5);
    return 0;
}