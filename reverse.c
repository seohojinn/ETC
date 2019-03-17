#include <stdio.h>

void reverse(int *arr ,int a, int b){
        int change=0;
        for(int i=0;i<((b-a)/2)+1;i++){
                change=arr[(a-1)+i];
                arr[(a-1)+i]=arr[(b-1)-i];
                arr[(b-1)-i]=change;
                
        }
        // for(int j=0;j<20;j++){
        //         printf("%d ",arr[j]);
        // }
        // printf("\n");
       
               
}

int main(){

        int arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
        int a,b;
        for(int i=0;i<10;i++){
                scanf("%d %d",&a,&b);
                if(1<=a && a<=b && b<=20){
                        reverse(arr,a,b);   
                }
                else{
                        break;
                }
        }
        for(int j=0;j<sizeof(arr)/sizeof(int);j++){
                printf("%d ",arr[j]);
        }
        printf("\n");

        return 0;
}