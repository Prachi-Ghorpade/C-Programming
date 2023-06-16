#include <stdio.h>

int main()
{
    int arr[10];
    

    for (int i = 1; i <= 10; i++)
    {
        int a = 5 * i;
        arr[i - 1] = a;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
