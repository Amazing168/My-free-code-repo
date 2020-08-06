# include<stdio.h>

int C(int n){
	n=n*(n-1);
	return n/2; 
}
int gcd(int a,int b){
	int t;
	while(b){
		t=a%b;
		a=b;
		b=t;
	}
	return a;
}
int main(){
	int K,n,m,he,g,j,s;
	scanf("%d",&K);
	while(K--){
		scanf("%d%d",&n,&m);
		if(n==0||m==0)	printf("0\n");
		
		else if(n==1&&m==1) printf("1\n");
		else{
			he=n+m;
			j=n*m;
			s=C(he);
			g=gcd(j,s);
			printf("%d/%d\n",j/g,s/g);
		}		
	} 
	return 0;
} 
