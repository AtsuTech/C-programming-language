# include <stdio.h>
int main(void){
    int i,sum = 0;
    for(i=1;i<=10;++i)
        sum += i;
    printf("sum=%d",sum);
    return 0;
}

// gcc -o p53_3-8 p53_3-8.c
// ./p53_3-8