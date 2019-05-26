#include <stdio.h>
#include <string.h>

int self(int n){
    int i=n,sum=n+n%10;
    while(i!=0){
        i/=10;
        sum+=i%10;
    }
    return sum;
}

int main(){
    
    int number=1;
    int value[10001]={0,};
    int count=0;
    int self_number=0;

    for(int i=1;i<=10000;i++){
        number=1;
        self_number=0;
        for(int j=1;j<=i;j++){
            self_number=self(number);
    
            if(i==self_number){
                break;
            }
            else if(j==i || j>self_number){
                value[count]=i;
                count++;
                break;
            }
            number++;
        }
    }
    for(int i=0;i<count;i++){
        printf("%d\n",value[i]);
    }
    
    return 0;
}
