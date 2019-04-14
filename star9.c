#include <stdio.h>

int main(){

    int N=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int j=0;j<(N*2)-1-(i*2);j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-i-2;j++){
            printf(" ");
        }
        for(int j=0;j<i*2+3;j++){
            printf("*");
        }
        printf("\n");
    }



    return 0;
}