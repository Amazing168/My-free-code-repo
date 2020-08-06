#include <stdio.h>
#define N 1000001
#define S 1000

int a[N]={1,1} ;

int main(){
        int i,j,k,n,l,m,h;
        for(i=2;i<S;i++){
        if(!a[i]){
            for(j=i*i;j<N;j+=i){
                a[j]=1;
            }
        }
    }
    scanf("%d",&n);
    for(k=0;k<n;k++){
    	int cnt=0;
        scanf("%d %d",&l,&h);
        if(l<h){
                for(m=l;m<=h;m++){
                    if(a[m]==0){
                    cnt++;
                }
              }
        }
        else {
                for(m=h;m<=l;m++){
                    if(a[m]==0){
                    cnt++;
                }
              }

        }
        printf("%d\n",cnt);

    }
  return 0;
}

