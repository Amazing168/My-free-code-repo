#include <stdio.h>

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
	int K,a,b;
	scanf("%d",&K);
	while(K--){
		scanf("%d%d",&a,&b);
		if(gcd(a,b+1)==1) printf("Yes\n");
		else printf("No\n");
		}
	return 0;
}
