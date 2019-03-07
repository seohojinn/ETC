#include<stdio.h>
#define N 5

int a[10];

int main(){
    printf("%d\n",sizeof(a));

    int b;
    scanf("%d",&b);
    for(int i=0;i<b;i++){
        scanf("%d",&a[i]);
    }
    printf("%d\n",sizeof(a));

    return 0;
}
