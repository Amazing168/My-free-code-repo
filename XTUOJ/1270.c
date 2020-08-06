# include<stdio.h> 
# include <stdbool.h>

int top=1,n;
__int64 ans[8877699];
bool is[13];  
void dfs(__int64 x,int n,int wei){
	int i;
	if(n==wei){
		ans[++top]=x;
	//	printf("x=%d \n",x); 
	}
	else {
		for(i=0;i<10;i++){
		//	printf("i=%d \n",i) ;
			if (is[i]) continue;
			if (x||i){
				is[i]=true;
			//	printf("x=%d i=%d n=%d \n",x,i,n);
				dfs(x*10+i,n+1,wei);
				is[i]=false; 
			}
		}
	} 
	
}


int main(){
	int j,k;
	for (j=1;j<=10;j++){
	for (k=0;k<12;k++) is[k]=0;
		dfs(0,0,j );//计算所有符合条件2位数字 
	}
	while(scanf("%d",&n)!=EOF){
		printf("%I64d\n",ans[n]);
	}
	return 0;
}
