#include<stdio.h>
void cel_to_f(float cel);
int main(){
    float cel;
    printf("Celcius = \n");
    scanf("%f",&cel);
    cel_to_f(cel);
    return 0;
}
void cel_to_f(float cel){
    float f=(cel*9/5)+32;
    printf("Conversion to farenheit is %.2f", f);
}