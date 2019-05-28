#include <stdio.h>

int main(){
    int N = 0;
    int arr[100]={0,};
    int v=0;
    int count = 0;

    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&v);
    for(int i=0;i<N;i++){
        if(v==arr[i]){
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}