#include <stdio.h>
#include <stdlib.h>

int main(){

    int *value;
    int subject=0;
    int M=0;
    float sum=0;
    float avg;
    scanf("%d",&subject);
    value=(int*)(malloc(sizeof(int)*subject));
    
    for(int i=0;i<subject;i++){
        scanf("%d",&value[i]);
    }
    for(int i=0;i<subject;i++){
        if(M<value[i]){
            M=value[i];
        }
    }

    for(int i=0;i<subject;i++){
        sum+=((float)value[i]/M)*100;
    }
    avg=sum/subject;
    printf("%.2f\n",avg);

    return 0;
}
