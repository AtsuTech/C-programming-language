#include<stdio.h>
#define LIMIT 500

int main(void){
    int n  = 0;
    float weight,sum = 0.0;

    do{
        printf("%d番目の方:",n+1);
        scanf("%f",&weight);
        sum += weight; n++;
    }while(sum<LIMIT);
    printf("%d人目の方で重量オーバーです¥n",n);
    return 0;
}

// gcc -o p59_3-14 p59_3-14.c
// ./p59_3-14