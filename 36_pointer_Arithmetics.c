#include<stdio.h>

int main(){
    int i=50; 
    int *ptr=&i;
    printf("value of ptr: %u\n",ptr);//6422284
    ptr++;
    printf("value of ptr: %u\n",ptr);//6422288
    //For int adress is increase by 4 units.

    char j=50; 
    char *ptrr=&j;
    printf("value of ptr: %u\n",ptrr);//6422283
    ptrr++;
    printf("value of ptr: %u\n",ptrr);//6422284
    //For char adress is increase by 1 units.

    int a=10;
    int *b=&a;
    int *c=&a;
    printf("value of b and c is %d and %d",b,c);
    return 0;

}