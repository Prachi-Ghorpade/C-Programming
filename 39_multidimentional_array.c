#include<stdio.h>

int main(){
    int n_student=3;
    int n_subject=2;
    int arr[3][2]={{11,12},{31,22},{32,55}};
    printf("marks of 1 st student in s1 is %d \n ",arr[0][0]);
    printf("marks of 1 st student in s2 is %d \n ",arr[0][1]);
    printf("marks of 2 nd student in s1 is %d \n ",arr[1][0]);
    printf("marks of 3 rd student in s2 is %d \n ",arr[2][1]);

    return 0;   
}