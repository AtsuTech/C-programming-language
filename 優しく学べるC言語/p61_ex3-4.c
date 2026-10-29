#include <stdio.h>

int main(void){
    int height;

    //hをheightにする??by解答
    for(int h=150;h<=190;h+=5){
        printf("%dcm %6.11fkg¥n", height, (height-100)*0.9);
    }

    return 0;
}

// gcc -o p61_ex3-4 p61_ex3-4.c
// ./p61_ex3-4