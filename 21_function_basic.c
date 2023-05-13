#include<stdio.h>
void display();      //function prototype

int main(){
    printf("main method executed\n");
    display();       //function call
    printf("main method finish\n");
    return 0;
}
void display(){      //function defination
    printf("I am display\n");
}