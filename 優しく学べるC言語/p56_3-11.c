# include<stdio.h>

int main(void){
    int i,sum = 0;

    for(i=10;i;i--)
        sum += 1;
    printf("sum =%d\n",sum);
    return 0;
}

// gcc -o p56_3-11 p56_3-11.c
// ./p56_3-11