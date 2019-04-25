#include <stdio.h>

int main(){
    int N=0,a=0,b=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d %d",&a,&b);
        printf("You get %d piece(s) and your dad gets %d piece(s).\n",a/b,a%b);
    }

    return 0;
}