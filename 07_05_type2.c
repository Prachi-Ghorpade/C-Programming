#include <stdio.h>
int reverse(int *ptr, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d, ", *(ptr+i));
    }
}
int main()
{
    int arr[] = {2, 5, 8, 6, 4, 7};
    reverse(arr, 6);
    return 0;
}