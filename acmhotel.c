#include <stdio.h>
#include <stdlib.h>

int main(){
    int T=0;
    int H=0,W=0,N=0;
    int **arr;
    int *value;

    scanf("%d",&T);
    value=(int*)(malloc(sizeof(int)*T));

    for(int i=0;i<T;i++){
        scanf("%d %d %d",&H,&W,&N);
        arr=(int**)(malloc(sizeof(int*)*H));
        for(int j=0;j<H;j++){
            arr[j]=(int*)(malloc(sizeof(int)*W));
        }
        for(int j=0;j<W;j++){
            for(int k=0;k<H;k++){
                N--;
                if(N<=0){
                    value[i]=((k+1)*100)+j+1;
                    break;
                }
            }
            if(N<=0){
                break;
            }
        }
    }

    for(int i=0;i<T;i++){
        printf("%d\n",value[i]);
    }
    printf("\n");

    for(int i=0;i<H;i++){
        free(arr[i]);
    }
    free(arr);

    return 0;
}