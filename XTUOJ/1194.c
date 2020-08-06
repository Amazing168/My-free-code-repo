# include <stdio.h>
# define p 1000000007 
	__int64 a[1010][1010],b[1001];	
	int i,j,n,k;
int main(){
	for(i=0;i<1010;i++) a[i][0]=a[i][i]=1;	
	for(i=2;i<1010;i++) 
		for(j=1;j<i;j++)
		 	a[i][j]=(a[i-1][j-1]%p+a[i-1][j]%p)%p; //杨辉三角记住！！ 
	b[1]=0;b[2]=1;
	for(i=3;i<=1000;i++) b[i]=(i-1)*(b[i-1]+b[i-2])%p; //错排公式记住！ 
	scanf("%d%d",&n,&k);
	while(n!=0){
		if(k==0)printf("1\n");//k=0时就一种情况！！ 
		else printf("%I64d\n",a[n][k]*b[k]%p);
		scanf("%d%d",&n,&k);	
	}
	return 0;
} 
