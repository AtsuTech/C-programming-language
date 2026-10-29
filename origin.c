#include <stdio.h>

int main(void){
    int a,b,c;

    printf("商品1の値段を入力しなさい");
    scanf("%d",&a);
    printf("商品2の値段を入力しなさい");
    scanf("%d",&b);

    c = a + b;

    if(c > 500)
        printf("商品1と商品2の合計金額は%d円です。予算500円オーバーしています。",c);
    else if(c <= 500)
        printf("商品1と商品2の合計金額は%d円です。予算内です。",c);
    return 0;
}