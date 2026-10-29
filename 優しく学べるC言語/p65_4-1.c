#include <stdio.h>
#define N 3
int main(void){
    int i, a[N];

    a[0]=10; a[1]=20; a[2]=30;
    for(i=0; i<N;i++)
        printf(" a[%d] = %d", i, a[i]);
    return 0;
}

// gcc -o p65_4-1 p65_4-1.c
// ./p65_4-1