#include <stdio.h>
#include <string.h>

int main(){
    char S[101];
    char ABC[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int idx[26]={0,};
    memset(S,'\0',sizeof(S));
    scanf("%s",S);
    for(int i=0;i<sizeof(ABC)-1;i++){
        for(int j=0;j<strlen(S);j++){
            if(ABC[i]==S[j]){
                idx[i]=j;
                break;
            }
            else{
                idx[i]=-1;
            }
        }
    }
    for(int i=0;i<sizeof(ABC)-1;i++){
        printf("%d ",idx[i]);
    }
    printf("\n");
    return 0;
}