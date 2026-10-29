#include  <stdio.h>

int main(void){
    int i, sum = 0;

    i = 1;
    while(i <= 10){
        sum += i;
        i++;
    }

    printf("sum = %d¥n" , sum);
    return 0;
}