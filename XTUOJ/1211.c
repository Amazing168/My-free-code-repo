#include<stdio.h>

int shu(char a){
	int t;
	t=a-'0';
	return t;
}
int main(){
	int K,a,b,c,i,j,k;
	char e[7];
	scanf("%d",&K);
	for(i=0;i<K;i++){
		scanf("%d+%d=%d",&a,&b,&c);
		j=a+b;
	//	printf("%d %d %d\n",a,b,j);
		if(j==c) printf("Yes\n");		
		else printf("No\n");
	}
	return 0;
}
