#include <stdio.h>

int main()
{
    char letter;
    printf("Enter letter \n");
    scanf("%c", &letter);
    if (letter >= 65 && letter <= 90)
        printf("%c is Uppercase \n", letter);
    else
        printf("%c is Lowercase \n", letter);

    //  By Casting:  
    //  int ascii=(int)letter;
    // printf("Ascii code for %c is %d \n",letter,ascii);

    // if(ascii>=65 && ascii<=90)
    // printf("%c is Uppercase \n",letter);
    // else
    // printf("%c is Lowercase \n",letter);

    return 0;
}