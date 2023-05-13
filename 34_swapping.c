#include<stdio.h>
int wrong_swap(int a,int b);
int swap(int *a,int *b);

int main(){
    int a=4,b=5;
    printf("Value of a and b before swap is %d and %d\n",a,b);
    wrong_swap(a,b);
    swap(&a,&b);
    printf("Value of a and b after swap is %d and %d\n",a,b);
    return 0;
}

int wrong_swap(int a,int b) { //this is wrong bez we r newly defining variable a and b. so the swapping is not occuring in the original variables.
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("a and b is %d and %d\n",a,b);
}
int swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}