#include <stdio.h>

int main(){
    int sum=0;
    int mul;
    for (int a=1;a<=10;a++){
        mul=8*a;
        sum=sum+mul;
    }
    printf("Sum of all numbers in table of 8 is %d.", sum);

    return 0;
}
