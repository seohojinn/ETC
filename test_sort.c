#include <stdio.h>

void MoveMaxToBack(int size,int *arr){
    int big=0;
    int change=-1;
    int i,j;

    for(i=size-1;i>=0;i--){
        for(j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                if(arr[j]>big){
                    big=arr[j];
                    change+=1;

                }
            }
            else{
                if(arr[j]>big){
                    big=arr[j];
                    change+=1;
                }
            }

        }
        swap(arr[i],arr[change],arr);
        change=-1;
        big=0;
        printf("==============\n");
        for(int i=0;i<size;i++){
            printf("%d  ",arr[i]);
        }
        printf("\n");
 
    }
  
}

int swap(int a, int b,int * arr){
    int changee=0;
    changee=arr[a];
    arr[a]=arr[b];
    arr[b]=changee;
    
}

int main(){
    int size=0;
    int arr[10];
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
  
    MoveMaxToBack(size,arr);
    // for(int j=0;j<size;j++){
    //     printf("%d ",arr[j]);
    // }
    // test ju seck
}
