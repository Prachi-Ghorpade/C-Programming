#include<stdio.h>

int main(){
    //char string []={'M','e','n','u','\0'};
    char str[]="Prachi";
    char *ptr=str;
    while (*ptr!='\0')
    {
       printf("%c",*ptr);
       ptr++;
    }
    return 0;
}