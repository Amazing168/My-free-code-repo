# include<stdio.h>

__int64 a[66][66]; 
int main(){
	int i,j,n;
	for(i=0;i<66;i++) a[i][0]=a[i][i]=1;
	for(i=2;i<66;i++) 
		for(j=1;j<=i;j++) a[i][j]=a[i-1][j-1]+a[i-1][j];
	while(scanf("%d",&n)!=EOF){
		__int64 k=0; 
		for(i=n/2;i<=n-1;i++) k+=a[n-1][i];
		printf("%I64d\n",k);
	}
	return 0;
} 
