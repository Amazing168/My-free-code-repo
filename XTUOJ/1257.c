# include <stdio.h>
# define M 36
	int a[M][M];
	int i,j,K,n,m,l;

int main (){

	for(i=0;i<M;i++) a[i][0]=a[i][i]=1;	
	for(i=2;i<M;i++)
		for(j=1;j<=i;j++) a[i][j]=a[i-1][j-1]+a[i-1][j];
	//printf("%d",a[3][1]);
	scanf("%d",&K);
	while(K--){
		scanf("%d%d",&n,&m);
		l=n-m;
		if(l%2) printf("0\n");
		else  printf("%d\n",a[n][l/2]);
	}
	return  0; 
}
