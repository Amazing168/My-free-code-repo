# include<stdio.h>

int main(){
	int K,m,n,cnt,i,t,k;
	scanf("%d",&K);
	while(K--){
		scanf("%d",&m);
		if((m%2)==0||(m%5)==0) printf("0\n");
		else {
			n=1;
			t=m;
			while(t--){
				n%=m;
				if(n==0)break;
				n=10*n+1; 
			}
			 printf("%d\n",m-t); 
		}
	} 
	return 0;
} 
