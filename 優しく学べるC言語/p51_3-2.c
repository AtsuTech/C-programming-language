#include <stdio.h>
int main(void){
    int x;

    printf("何か入力してください");
    scanf("%d", &x);

    switch(x%2){
        case 0: puts("偶数です"); break;
        case 1: puts("奇数です"); break;
        default : puts("エラー");
    }
    return 0;
}


// gcc -o p51_3-2 p51_3-2.c
// ./p51_3-2