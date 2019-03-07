#include<stdio.h>


int main(){
    int arr[10];
    int size=0;
    int max=0;
    int max_idx=0;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(int j=0;j<size;j++){
        
        if(arr[j]>max){
            max=arr[j];
            max_idx=j;
        }
        
    }
    printf("%d\n",max);
    printf("%d\n",max_idx);
 


    return 0;
}