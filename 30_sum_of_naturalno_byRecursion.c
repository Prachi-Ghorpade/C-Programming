#include <stdio.h>
int sum(int n)
{int total;
    if(n>0){
      return n+sum(n-1);
    }    
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Sum of first %d natural number is %d",n,sum(n));
    return 0;
}