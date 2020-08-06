# include <stdio.h>

int gcd(int a,int b){
	int t;
	while(b){
		t=a%b;
		a=b;
		b=t;
	}
	return t;
}
int C(int a){
	int t;
	t=a*(a-1)*(a-2);
	t/=6;
	return t;
}
int main(){
	int K,n,m,a,b;
	scanf("%d",&K);
	for(b=0;b<K;b++){

		scanf("%d%d",&n,&m);
		if(m==0) {
				 printf("0\n");
				 continue;
			}
		if(m==n){
		 		 printf("1\n");
				 continue;
			}	 
		else{
		n=C(n);
		m=C(m);
		printf("%d %d\n",n,m);
		if(n%m==0) printf("%d\n",m/n);
		else {
			a=gcd(n,m);
			printf("%d",a);
			printf("%d/%d\n",m/a,n/a);
		}
		}
	}
	return 0;
}
