#include <stdio.h>

int main(void){
    int data;

    printf("Data >>");
    scanf("%d",&data);
    switch(data%2){
        case 0: puts("偶数です") ;break;
        case 1: puts("奇数です");break;
        default: printf("エラー%d",data);   ;
    }
    return 0;
}

// gcc -o p62_ex3-6 p62_ex3-6.c
// ./p62_ex3-6