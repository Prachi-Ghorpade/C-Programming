#include<stdio.h>
#include<string.h>

int main(){
    char source []="prachi";
    char target[30];
    strcpy(target,source);
    printf("My name is %s",target);
    return 0;
}