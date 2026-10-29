# include <stdio.h>

int main(void){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            printf("%3d", i*j);
        }
        printf("\n");
    }
    return 0;
}

// gcc -o p55_3-10 p55_3-10.c
// ./p55_3-10