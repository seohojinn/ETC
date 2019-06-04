#include <stdio.h>

void add_arr(int * arr,int a,int b,int c){
    int arr_sum[10]={0,};
    int a_idx=a;
    int b_idx=b;
    int count=1;

    for(int i=a;i<c;i++){
        if(a_idx==b){
            for(int j=b_idx;j<c;j++){
                arr_sum[count]=arr[b_idx];
                b_idx++;
                count++;
            }
            break;
        }
        else if(b_idx==c){
            for(int j=a_idx;j<b;j++){
                arr_sum[count]=arr[a_idx];
                a_idx++;
                count++;
            }
            break;
        }
        else if(arr[a_idx]>arr[b_idx]){
            arr_sum[i]=arr[b_idx];
            b_idx++;
        }
        else if(arr[a_idx]<arr[b_idx]){
            arr_sum[i]=arr[a_idx];
            a_idx++;
        }
        count++;
    }

    for(int i=a;i<c;i++){
        arr[i]=arr_sum[i];
    }

}

int main(){
    int arr[10]={100,1,2,11,3,4,5,6,7,18};
    int a=1,b=4,c=10;
    add_arr(arr,a,b,c);
    puts("");
    for(int i=0;i<c;i++){
        printf("%d ",arr[i]);
    }
    puts("");

    return 0;
}