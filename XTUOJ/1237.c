# include <stdio.h>
# define max 5000009
int a[max];
int p[max];
int main(){
	int K,b,i,j,k,l,cnt;
	a[0]=1;
	a[1]=1;
	for(i=2;i*i<=max;i++){
		if(!a[i]){
			for(j=i*i;j<=max;j+=i) a[j]=1;
		} 
	}
	p[0]=p[1]=p[2]=p[3]=p[4]=0;
	for(j=2;j<=max-2;j++){
		if(a[j]==0&&a[j+2]==0) p[j+2]=p[j+1]+1;//前缀和注意数组每个元素代表的什么！！  
		else p[j+2]=p[j+1]; //可以代入几个较小的样例来验证。 
	}
	scanf("%d",&K);
	while(K--){
		scanf("%d%d",&k,&b);
		cnt=0;
		if(b-k>=2) cnt=p[b]-p[k+1];//注意 k+1 到底代表的是什么！！ 
		printf("%d\n",cnt);
	}
	return 0;
}
