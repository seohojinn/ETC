#include<stdio.h>
#include<string.h>
int main(){
    
    int input;
    char N[10];
    int value;

    scanf("%d",&input);
    scanf("%s",N);
    if(input==strlen(N)){
        for(int i=0;i<input;i++){
            value+=N[i]-'0';
        }
        printf("%d\n",value);
    }
    return 0;

    
}
