#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int num,guess,count=1;
    srand(time(0));
    num=rand()%100+1;
 //   printf("random number is %d\n",num);
    
    do{
        printf("Guess the number \n");
        scanf("%d",&guess);

        if(guess<num){
            printf("Higher number please\n");
           // count++;
        }
        else if(guess>num){
            printf("Lower number please\n");
           // count++;
        }
        else{
            printf("Correct! You guess it in %d attempts\n",count);
        }
     count++;
    }
    while(num!=guess);


    return 0;
}