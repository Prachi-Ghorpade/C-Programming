#include<stdio.h>
void add(int i);
int main(){
    int i=6;
    printf("Address of i is %u\n",&i);
    add(i);
    return 0;
}
void add(int i){
    printf("Address of i is %u\n",&i);
}