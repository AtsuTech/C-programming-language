#include<stdio.h>

int main(void){
    int a, n, kai = 1;

    printf("a:"); scanf("%d",&a);
    n = 0;
    do{
        ++n;
        kai = kai*2;
        printf("%d",kai);
        putchar('|');
    }while(kai<a);
    putchar('\n');
    return 0;
}

// gcc -o p62_ex3-5 p62_ex3-5.c
// ./p62_ex3-5