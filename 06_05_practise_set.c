#include<stdio.h>

int main(){
    int i=18;
    int *j=&i;
    int **k=&j;
    printf("value of i is %d",**k);
    return 0;
}