#include  <stdio.h>

int main(void){
    int c, sum = 0;

    for(;;){
        printf("Data ->");
        scanf("%d",&c);
        if(c < 0)
            break;
        sum += c;
    }
    printf("合計 = %d¥n" , sum);
    return 0;
}