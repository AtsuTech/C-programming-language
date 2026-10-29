# include<stdio.h>
int main(void){
    int c,sum=0;

    for(;;){
        printf("Data->");
        scanf("%d",&c);
        if(c<0)
            break;
        sum += c;
    }
    printf("合計 =%d",sum);
    return 0;
}


// gcc -o p54_3-9 p54_3-9.c
// ./p54_3-9