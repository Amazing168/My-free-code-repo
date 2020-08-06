# include <stdio.h>

int main(){
	int T,a,b,c,cnt;
	scanf("%d",&T);
	while(T--){
		scanf("%d%d%d",&a,&b,&c);
		cnt=0;
		while(a<c){
			a+=b;	
			cnt++;
		}
		printf("%d\n",cnt);
	} 
	return 0;
} 
