#include<stdio.h>
#include<string.h>

int main(){
    char a[1000001];
    int count=0;
    fgets(a,sizeof(a),stdin);

    printf("%d\n",strlen(a));
    for(int i=0;i<strlen(a)-1;i++){
        if(i==0){
            continue;
        }
        else if(a[i]== ' ' || i==strlen(a)-2){
            printf("%d ",i);
            count+=1;
        }
    }

    printf("\n%d\n",count);

    return 0;
}