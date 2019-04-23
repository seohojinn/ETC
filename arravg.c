#include <stdio.h>

int main(){
    int arr[5];
    int sum=0;
    int avg;
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        scanf("%d",&arr[i]);
        if(arr[i]<40){
            sum+=40;
        }
        else{
            sum+=arr[i];
        }
    }
    avg=sum/5;
    printf("%d\n",avg);
    
    return 0;
}