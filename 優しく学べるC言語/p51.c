// 例題3-6 p.51


#include <stdio.h>
int main(void){
    int s;

    printf("ご注文は？");
    s = getchar();
    switch(s){
        case 'j':
        case 'J':puts("Juice 150円です"); break;
        case 'c':
        case 'C':puts("Coffee 250円です"); break;
        case 'm':
        case 'M':puts("Milk 150円です"); break;
        default:puts("メニューにありません");
    }
    return 0;
}