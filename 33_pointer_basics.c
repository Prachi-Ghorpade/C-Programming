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

    char c='p';
    char *z=&c;
    printf("value of c is %c\n",c);
    printf("address of c is %u\n",&c);
    printf("value of c is %c\n",*(&c));
    printf("address of z is %u\n",&z);
    printf("value of z is %d\n",z);
    printf("value of z is %d\n",*(&z));

    return 0;
}