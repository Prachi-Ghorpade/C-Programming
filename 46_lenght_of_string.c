#include<stdio.h>

int main(){
    char str[]="London";
    char *ptr=str;
    int count=0;
    while (*ptr!='\0')
    {
        count++;
        ptr++;
    }
    printf("lenght of string is %d",count);
    return 0;
}