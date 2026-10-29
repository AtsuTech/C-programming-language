#include <stdio.h>

int main(void){
    int input;

    printf("年代の下2桁入力:");scanf("%d",&input);
    // if(input >= 50){ puts("2000年"); }
    // else{puts("1900年"); }
        
    if(input >= 50)
        printf("西暦%d年です¥n",1900+input);
    else
        printf("西暦%d年です¥n",2000+input);
}


// gcc -o p61_ex3-2 p61_ex3-2.c
// ./p61_ex3-2