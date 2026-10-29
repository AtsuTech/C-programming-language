#include <stdio.h>

int main (void){
 int s = 250;
 int d,t;

 printf("距離(m)を入力しなさい");
 scanf("%d",&d);
 t = d/s;
 printf("所用時間は%d分です¥n",t);
 return 0;
 
}