#include <stdio.h>

int main()
{
    double radius, height;
    double pi = 3.14;
    printf("What is the radius of circle \n");
    scanf("%lf", &radius);
    printf("Area of this circle is %lf \n", pi * radius * radius);

    printf("What is the height of cylinder \n");
    scanf("%lf", &height);
    printf("Volume of cylinder is %lf", pi * radius * radius * height);
    return 0;
}