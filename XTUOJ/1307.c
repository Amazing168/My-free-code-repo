# include <stdio.h>

int sum1,sum2;
__int64 a,b;

void dfs(__int64 now,__int64 flag,int *sum,__int64 n){
	if(flag>1||now>n) return;//剪枝的两个条件。 c
	if(flag==1){
		*sum+=1;
		dfs(now<<1|1,flag,sum,n);
	}
	else{
		dfs(now<<1,flag+1,sum,n);// now*2 
		dfs(now<<1|1,flag,sum,n);// now*2+1
	}
}

int main (){
	int K;
	scanf("%d",&K);
	while(K--){
		scanf("%I64d%I64d",&a,&b);
		sum1=sum2=0;
		a--;
		dfs(1,0,&sum1,a);
		dfs(1,0,&sum2,b);
		printf("%I64d\n",sum2-sum1);
	} 	
	return 0;
} 
