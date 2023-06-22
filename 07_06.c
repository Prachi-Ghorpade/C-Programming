#include<stdio.h>
int positive(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            count++;
        }
    }
    printf("%d positive integers are there",count);
}
int main(){
    int arr[]={5,8,-6,9,-2,40};
    positive(arr,6);  
    
    return 0;
}