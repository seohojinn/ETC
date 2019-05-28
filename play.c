#include <stdio.h>

int main(){
    int a=0,b=0,c=0,d=0;
    int su=0;
    char arr[4]={0,};

    for(int i=0;i<3;i++){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        su=a+b+c+d;

        if(su==2){
            arr[i]='B';
        }
        else if(su==3){
            arr[i]='A';
        }
        else if(su==4){
            arr[i]='E';
        }
        else if(su==1){
            arr[i]='C';
        }
        else if(su==0){
            arr[i]='D';
        }
        su=0;
    }

    for(int i=0;i<3;i++){
        printf("%c\n",arr[i]);
    }
    return 0;
}