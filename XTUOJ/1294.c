# include<stdio.h>

int main(){
	int K,n,i,j,k,cnt;
	char s[11111];
	scanf("%d",&K);
	while(K--){
		scanf("%s%d",s,&n);
		while(n--){
			scanf("%d%d",&i,&j);
			cnt=0;
			for(k=i-1;k<j-1;k++){
				if(s[k]!=s[k+1]) cnt++; 
			}		
			printf("%d\n",cnt);
		}
	} 
	return 0;
} 
