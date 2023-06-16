#include<stdio.h>

int main(){
    int arr []={2,9,0,6,7,5,3,4,1,8};    
    int *ptr = &arr[0];
    printf("value of 1 st element is: %d\n",*ptr);
    printf("value of 3rd element is: %d",*ptr+2);

    printf("value of 4 element is: %d",*(arr+3));

    return 0;
}