#include <stdio.h>

int main(){
    int X;
    int a=0,b=0;
    int count=0;
    scanf("%d",&X);

    for(int i=1;i<=X;i++){
        if(i%2==1){
            a=i;
            b=i-(i-1);
        }
        else if(i%2==0){
            a=i-(i-1);
            b=i;
        }
        for(int j=1;j<=i;j++){
            if(i%2==1){
                count++;
                if(count>=X){
                    break;
                }
                a--;
                b++;
            }
            else if(i%2==0){
                count++;
                if(count>=X){
                    break;
                }
                a++;
                b--;
            }
        }
        if(count>=X){
            break;
        }
    }
    printf("%d/%d\n",a,b);
    return 0;
}