#include<stdio.h>

int main(){
    int i=34;
    int *j=&i;
    int **k=&j;
    printf("Value of i %d\n",i);
    printf("Value of i %d\n",*j);
    printf("Value of j %d\n",j);
    printf("Address of i %u\n",&i);
    printf("Address of j %u\n",&j);
    printf("value of j %u\n",*(&j));
    printf("value of k %d\n",k);
    return 0;
}