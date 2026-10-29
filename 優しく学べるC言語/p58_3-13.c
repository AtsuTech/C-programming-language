#include<stdio.h>
int main(void){
    int i,sum=0;

    i=1;
    do{
        sum += i;
        i++;
    }while(i<=10);
    printf("sum=%d¥n",sum);
    return 0;
}


// gcc -o p58_3-13 p58_3-13.c
// ./p58_3-13