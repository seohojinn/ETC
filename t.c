#include <stdio.h>

int main(){
    int size=0;
    
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        for(int j=(size-i)-1;j>0;j--){
            printf(" ");
        }
        for(int j=0;j<(i+1)*2-1;j++){
            printf("*");
        }
       

        printf("\n");
    }


    return 0;
}