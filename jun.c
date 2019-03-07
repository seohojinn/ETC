#include<stdio.h>
#include<string.h>

int q[10];
int add;
int qfront;

void push(int data){   
    q[add]=data;
    add++;

}

int pop(){
    int ppap;
    if(q[qfront]==0){
        return -1;
    }
    ppap=q[qfront];
    qfront++;
    return ppap;
}
int size(){
    int i;
    int space=0;
    for(i=qfront;i<add;i++){
        space+=1;
    }
    return space;
}
int empty(){
    if(q[qfront]==0){
        return 1;
    }
    else{
        return 0;
    }

}
int front(){
    if(q[0]==0){
        return -1;
    }
    else{
        return q[qfront];
    }
}
int back(){
    if(q[add-1]==0){
        return -1;
    }
    else{
        return q[add-1];
    }

}

int main(){
    int n,i,data;
    char str[10];
    scanf("%d ",&n);
    for(i=0;i<n;i++){
        scanf("%s ",str);

        if(!strcmp(str,"push")){
            scanf("%d",&data);
            push(data);
        }
        else if(!strcmp(str,"pop")){
            printf("%d",pop());
        }
        else if(!strcmp(str,"size")){
            printf("%d",size());
        }
        else if(!strcmp(str,"empty")){
            printf("%d",empty());
        }
        else if(!strcmp(str,"front")){
            printf("%d",front());
        }
        else if(!strcmp(str,"back")){
            printf("%d",back());
        }
    }
    // 백준 미제출
}