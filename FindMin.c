#include <stdio.h>

int main(){
    int arr[10];
    int size=0;
    int min=0;
    int min_idx=0;

    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    min=arr[0];
    for(int i=0;i<size-1;i++){
        if(min>arr[i+1]){
            min=arr[i+1];
            min_idx++;
        }
    }
    printf("%d\n",min);
    printf("%d\n",min_idx);

    return 0;

}