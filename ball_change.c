#include <stdio.h>

void swap(int * arr,int i,int j){
    if(i==-1){
        i=0;
    }
    if(j==-1){
        j=0;
    }
    int tmp=arr[i];
    arr[i]=arr[j];
    arr[j]=tmp;
}

int main(){
    int N=0,M=0,i=0,j=0;
    int arr[100]={0,};

    scanf("%d %d",&N,&M);

    for(int a=0;a<N;a++){
        arr[a]=a+1;
    }
    for(int a=0;a<M;a++){
        scanf("%d %d",&i,&j);
        swap(arr,i-1,j-1);
    }  
    for(int a=0;a<N;a++){
        printf("%d ",arr[a]);
    }  
    printf("\n");
    return 0;
}