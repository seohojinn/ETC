#include <stdio.h>
#include <string.h>
#include <limits.h>

int main(){
    char N[1000000];
    char M[1000000];
    int value[1000000]={0,};
    int count=0,max=INT_MIN;
    int count9_or_6=1;

    scanf("%s",N);
    strcpy(M,N);
    
    for(int i=0;i<strlen(N);i++){
        for(int j=0;j<strlen(N);j++){
            if(((N[i]=='9')&&(M[j]=='9'))&&(count9_or_6<1)){
                    count9_or_6++;
            }
            else if(((N[i]=='6')&&(M[j]=='6'))&&(count9_or_6<1)){
                    count9_or_6++;
            }
            else if((N[i]=='9'&&N[j]=='6')||(M[i]=='6'&&M[j]=='9')){
                if(count9_or_6<=1){
                    count9_or_6++;
                }
                else{
                    count++;
                    count9_or_6=0;
                }
            }

            else if(N[i]==M[j]){
                count9_or_6=0;
                count++;           
            }
        }
        value[i]=count;
        count=0;
    }

    for(int i=0;i<strlen(N);i++){
        printf("%d ",value[i]);
    }
    puts("");

    for(int i=0;i<strlen(N);i++){
        if(max<value[i]){
            max=value[i];
        }
    }
    if(max<=0){
        max++;
    }
    printf("%d\n",max);

    return 0;
}