# include<stdio.h>
#define N 10000001
#define S 10000 
int a[N]={1,1} ;

int main(){
		int i,j,k,n,l,m,h,x,K,flag;
        for(i=2;i<S;i++){
        	if(!a[i]){
           		for(j=i*i;j<N;j+=i){
                	a[j]=1;
            }
        }
    }
    scanf("%d",&K);
    while(K--){
    	flag=0;
    	scanf("%d",&x);
    	if(x==1||x==2||x==3){
    		printf("No\n");
    		continue; 
		} 
    	for(n=2;n*n<x;n++){
    		if(a[n]==0){
    			for(j=n+1;j<x;j++){
    				if(a[j]==0){
    					h=n*j;
    					if(h==x) {
    						flag=1;
    						break;
						}	
					}
				else continue;	
				}	
			}
			else continue;	
    		if(flag) break;
		}
		if(flag) printf("Yes\n");
    	else printf("No\n");
	}
	return 0;
}
