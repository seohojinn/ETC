#include <stdio.h>

int main(){
    int N=0;
    int count=1;
    int point=2;
    int k=1;

    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        if(N==1){
            break;
        }
        if(point==i){
            count++;
            point+=6*k;
            k++;
        }
    }

    printf("%d\n",count);

    return 0;
}