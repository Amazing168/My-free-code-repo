#include <stdio.h>
#define  max 32 

int main(){
    int f[max],mi[max];
    int i,n,j,K,sum;    
    f[0]=1;
    f[1]=2;
    mi[0]=1;
    mi[1]=2;
    for(i=2;i<max;i++){
        f[i]=f[i-1]+f[i-2];    
        mi[i]=mi[i-1]*2;
    }
 //   printf("%d %d",f[31],mi[5]);
    scanf("%d",&K);
    while(K--){
        scanf("%d",&n);
        sum=0;
        for(j=max-1;j>=0;j--){
            if(n>=f[j]){
                n-=f[j];
                sum+=mi[j];
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
	 
