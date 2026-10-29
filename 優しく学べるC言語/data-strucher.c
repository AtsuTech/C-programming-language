// プログラム実行手順
// gcc -o data-strucher data-strucher.c
// ./data-strucher

#include <stdio.h>

# define N 5

typedef struct{
    char name[20];
    float height;
    float weight;
} LIST;

LIST kenkou(int);

int main(void){
    int no;
    LIST dd;
    printf("番号:");
    scanf("%d",&no);
    dd = kenkou(no);
    printf("%sさん身長:%5.2fCm 体重: %4.2fKg¥n",dd.name, dd.height, dd.weight);
    return 0;
}

LIST kenkou(int who){
    static LIST data[N] = {
        "太郎",173.7,46.6,
        "寺郎",183.1,44.6,
        "健太",153.7,96.6,
        "タカシ",193.7,76.6,
        "春彦",163.7,36.6,
    };
    return data[who - 1];
}