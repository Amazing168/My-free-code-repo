/*思路：按平波的种类分类讨论，剩下的就是排列组合*/
#include<stdio.h>
int main(){
	int t,n,i,j,flag;
	__int64 a[44][44],ans;
	for(i=1;i<=42;i++){
		a[i][0]=a[i][i]=1;
		for(j=1;j<i;j++)  a[i][j]=a[i-1][j]+a[i-1][j-1];
	}
	a[0][0]=1;
	scanf("%d",&t);
	while(t--){
		ans=0;
		scanf("%d",&n);
		if(n==1)  printf("1\n");
		else if(n==2)  printf("3\n");
		else if(n==3)  printf("7\n");
		else{
			for(i=n;i>=0;i-=2){
				ans+=a[n][i]*a[n-i][(n-i)/2];		
			}
			printf("%I64d\n",ans);//范围太大，超__int64了。 
		}
	}
	return 0;
} 
