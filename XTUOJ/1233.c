# include <stdio.h>

int main(){
	int K,n,i,j,k,p,q;
	char l;
	scanf("%d",&K);
	while(K--){
		scanf("%d",&n);
 		char a[3*n][3*n];
		l='A'+n-1; 
	//	printf("%c",l);
		for(i=1,j=2*n-1;i<=n-1;i++,j--,l--){
				for(p=i;p<=j;p++) a[i][p]=a[j][p]=a[p][i]=a[p][j]=l; 
		}
		a[n][n]='A';
		for(k=1;k<=2*n-1;k++){
			for(q=1;q<=2*n-1;q++) printf("%c",a[k][q]);
			printf("\n");
		}	
	}
	return 0;
}
