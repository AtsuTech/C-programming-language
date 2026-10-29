#include <stdio.h>

int main(void){

    int a,b,c;

    printf("aとbにそれぞれ値を入力してください");

    printf("a=");
    scanf("%d",&a);

    printf("b=");
    scanf("%d",&b);

    // 三項演算子
    c = (a>b) ? a : b;

    printf("大きいのは%dです",c);
    return 0;
}