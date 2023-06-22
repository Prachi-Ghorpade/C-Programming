#include<stdio.h>
#include<string.h>

int main(){
    char str1[30]="Hello";
    char str2[]="Prachi"; //or char *str2=" Prachi";
    strcat(str1,str2);
    printf("Now str1 is %s",str1);

    return 0;
}