#include <stdio.h>

int main(void){
    int a,b,c,max;

    printf("入力:");scanf("%d",&a);
    printf("入力:");scanf("%d",&b);
    printf("入力:");scanf("%d",&c);

    int array[3] = {a,b,c};
    max = array[0];
    for(int i=0;i<3;i++){
        if(max<array[i]){
            max = array[i];
        }
    }
    printf("最大は%dです¥n",max);   


    //自分のコード　バグになる
    // int array[3] = {a,b,c};
    // for(int i=0;i<3;i++){
    //     if(i+1<3){
    //         if(array[i]<array[i+1]){
    //             max = array[i+1];
    //         }
    //     }
    // }
    // printf("最大は%dです¥n",max);   

    return 0;
}

// gcc -o p61_ex3-3 p61_ex3-3.c
// ./p61_ex3-3