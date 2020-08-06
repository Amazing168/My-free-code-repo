#include <stdio.h>

int main(){
	int N,i,j,k,n,l; 
	scanf("%d",&N);
	while(N!=0){
		for(i=1;i<=N;i++){
			for(n=0;n<N-i;n++){
				printf(" ");
			}	
			if(i==1) printf("1"); 
			for(j=1;j<=i-1;j++) printf("%d",j);
			if(i!=1) printf("+");  
			for(k=i-1;k>=1;k--) printf("%d",k);
			printf("\n");
		}
		scanf("%d",&N);
	}
	return 0;
}
