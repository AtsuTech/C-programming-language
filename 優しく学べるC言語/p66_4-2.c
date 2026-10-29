#include<stdio.h>
#define N 3 //入力データ数

int main(void){
    int i;
    double b[N], sum=0.0;

    printf("%d個データを入れろ",N);
    for(i=0;i<N;i++){
        scanf("%lf",&b[i]);sum += b[i];
    }
    printf("平均 = %.2f¥n", sum/N);
    return 0;
}

// gcc -o p66_4-2 p66_4-2.c
// ./p66_4-2