
#include <stdio.h>

int main(){
    int T=0;
    int k=0,n=0;
    int c[14]={0,};
    int d[14]={0,};
    int value=0;

    scanf("%d",&T);

    for(int i=0;i<T;i++){
        scanf("%d",&k);
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            c[n-i-1]=n-i;
        }
        for(int ii=0;ii<k;ii++){
            for(int j=0;j<n;j++){
                for(int z=0;z<=j;z++){
                    d[j]+=c[z];
                    value=d[j];
                }
            }
            for(int j=0;j<n;j++){
                c[j]=d[j];
                d[j]=0;
            }
        }
        printf("%d\n",value);
    }

    return 0;
}