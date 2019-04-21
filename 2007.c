#include <stdio.h>

int main(){
    int x=0,y=0;
    scanf("%d %d",&x,&y);
    int day=0;
    for(int i=1;i<=x;i++){
        if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12){
            for(int j=1;j<=31;j++){
                day++;
                if(i==x && j==y){
                    break;
                }
                if(day==7){
                    day=0;
                }
            }
        }
        if(i==4 || i==6 || i==9 || i==11){
            for(int j=1;j<=30;j++){
                day++;
                if(i==x && j==y){
                    break;
                }
                if(day==7){
                    day=0;
                }
            }
        }
        if(i==2){
            for(int j=1;j<=28;j++){
                day++;
                if(i==x && j==y){
                    break;
                }
                if(day==7){
                    day=0;
                }
            }
        }
    }

    if(day==1){
        printf("MON\n");
    }
    else if(day==2){
        printf("TUE\n");
    }
    else if(day==3){
        printf("WED\n");
    }
    else if(day==4){
        printf("THU\n");
    }
    else if(day==5){
        printf("FRI\n");
    }
    else if(day==6){
        printf("SAT\n");
    }
    else{
        printf("SUN\n");
    }

    return 0;
}