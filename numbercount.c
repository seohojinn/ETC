#include <stdio.h>
#include <string.h>

int main(){
    int A=0;
    int B=0;
    int C=0;
    char count[1000];
    int arr[10];
    scanf("%d %d %d",&A,&B,&C);
    sprintf(count,"%d",A*B*C);
    for(int i=0;i<strlen(count);i++){
        if(count[i]-'0'==0){
            arr[0]+=1;
        }
        else if(count[i]-'0'==1){
            arr[1]+=1;
        }
        else if(count[i]-'0'==2){
            arr[2]+=1;
        }
        else if(count[i]-'0'==3){
            arr[3]+=1;
        }
        else if(count[i]-'0'==4){
            arr[4]+=1;
        }
        else if(count[i]-'0'==5){
            arr[5]+=1;
        }
        else if(count[i]-'0'==6){
            arr[6]+=1;
        }
        else if(count[i]-'0'==7){
            arr[7]+=1;
        }
        else if(count[i]-'0'==8){
            arr[8]+=1;
        }
        else if(count[i]-'0'==9){
            arr[9]+=1;
        }
    }
    for(int i=0;i<10;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}