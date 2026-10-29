#include<stdio.h>

int main(void){
    int i,sum = 0;

    i=1;
    while(i<=10){
        sum += i;
        i++;
    }
    printf("sum=%d\n",sum);
    return 0;
}



// gcc -o p57_3-12 p57_3-12.c
// ./p57_3-12