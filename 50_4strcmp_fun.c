#include<stdio.h>
#include<string.h>

int main(){
    char str1[]="ponky";
    char str2[]="pinky";
    int val=strcmp(str1,str2); 
    printf("val is %d",val);
    return 0;
}