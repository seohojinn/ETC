#include <stdio.h>
#include<string.h>

int main(){
    char input[100];
    int i;
    int cur=0,sum=0;
    gets(input);

    for(i=0;i<strlen(input);i++){
         if(input[i]=='+'){
             
             sum+=cur;
             cur=0;
             
         }
         else{
            cur*=10;
            cur+=input[i]-'0';
         }
         if(i==strlen(input)-1){
            sum+=cur;
         }
    }
   printf("%d\n",sum);

}

// 123+456+123

// cur,sum

// 숫자를 만나면 해야 할 일
// cur*10+지금 숫자

// + 를 만나면 해야 할 일
// sum+=cur
// cur=0