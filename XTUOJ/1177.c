# include <stdio.h>

int main(){
	__int64 a[68][68];
	int i,j,k;
	for(i=0;i<68;i++) a[i][0]=a[i][i]=1;	
	for(i=2;i<68;i++) for(j=1;j<i;j++) a[i][j]=a[i-1][j-1]+a[i-1][j];
	int N,M;
	scanf("%d%d",&N,&M);
	while(N!=0){
		printf("%I64d\n",a[N+M][M]);
		scanf("%d%d",&N,&M);	
	}
	return 0;
}
