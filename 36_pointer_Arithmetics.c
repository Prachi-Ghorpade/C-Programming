#include<stdio.h>

int main(){
    int i=50; 
    int *ptr=&i;
    printf("value of ptr: %u\n",ptr);
    ptr++;
    printf("value of ptr: %u\n",ptr);

    char j=50; 
    char *ptrr=&j;
    printf("value of ptr: %u\n",ptrr);
    ptrr++;
    printf("value of ptr: %u\n",ptrr);

    int a=10;
    int *b=&a;
    int *c=&a;
    printf("value of b and c is %d and %d",b,c);
    return 0;

}