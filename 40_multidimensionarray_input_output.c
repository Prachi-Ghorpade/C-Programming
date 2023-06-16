#include <stdio.h>

int main()
{
    int arr[3][2];
    for (int i = 0; i < 3; i++)        //to write array  
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value :");
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)       ////to read array   
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Value of %d row and %d column is %d\n",i+1,j+1,arr[i][j]);
        }
    }

    return 0;
}