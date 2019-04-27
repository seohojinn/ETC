#include <stdio.h>
#include <string.h>

int main(){
    char N[201];
    memset(N,'\0',sizeof(N));
    int a=0;
    int sum=0;
    fgets(N,sizeof(N),stdin);
    for(int i=0;i<strlen(N);i++){
        if(N[i]==' ' || N[i]=='\n'){
            sum+=a;
            a=0;
        }
        else{
            a=a*10;
            a+=N[i]-'0';
        
        }
    }
        
    printf("%d\n",sum);
    return 0;
}