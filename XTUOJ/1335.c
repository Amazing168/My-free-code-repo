#include <stdio.h>

int main(){
	int T,r,i,j,cnt;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&r);
		cnt=1;
		for(i=1;i<=r;i++){
			for(j=1;j<=r;j++){
				if((i*i+j*j)==r*r) cnt++;
			}
		}	
		printf("%d\n",cnt*4);
		
	}
	return 0;
} 
