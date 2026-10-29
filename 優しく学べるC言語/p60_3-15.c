#include<stdio.h>

int main(void){

    int a,b;
    a=123;

    while(1){
        
        printf("Input data:");scanf("%d",&b);
        if(a>b) { puts("小さい"); continue;}
        else if(a<b){ puts("大きい"); continue;}
        else {puts("あたり"); break;}

        return 0;
    }






    //---------自分の回答---------
    // int SETTING = 123;
    // int input;
    // printf("入力:");
    // scanf("%d",&input);

    // if(input < SETTING){
    //     printf("%d小さい",SETTING);
    // }else if(input > SETTING){
    //     printf("%d大きい",SETTING);
    // }else{
    //     printf("%d等しい",SETTING);
    // }
    // return 0;
}


// gcc -o p60_3-15 p60_3-15.c
// ./p60_3-15