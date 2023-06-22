#include<stdio.h>

int main(){
    int arr[3][10];
    int a;
    for(int i=0;i<3;i++){
        if(i==0){a=2;
        for(int j=0;j<10;j++){
            arr[i][j]=a*(j+1);
        }
        }
        if(i==1){a=7;
        for(int j=0;j<10;j++){
            arr[i][j]=a*(j+1);
        }
        }
        if(i==2){a=9;
        for(int j=0;j<10;j++){
            arr[i][j]=a*(j+1);
        }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            printf("%d, ",arr[i][j]);
        }
        printf("\n");
    }



    return 0;
}