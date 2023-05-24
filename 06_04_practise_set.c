#include<stdio.h>
void cal(int a,int b,int *sum,float *avg);

int main(){
    int a=30;int b=20;
    int sum;
    float avg;
    cal(a,b,&sum,&avg);
    printf("sum of a and b is %d\n",sum);
    printf("avg of a and b is %f\n",avg);

    return 0;
}
void cal(int a,int b,int *sum,float *avg){
    *sum=a+b;
    *avg=*sum/2;
}