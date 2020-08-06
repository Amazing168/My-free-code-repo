# include<stdio.h>

int main (){
	int K,i,j,k,n;
	char m;
	scanf("%d",&K);
	while(K--){
		scanf("%d",&n);
		m='A'+n-1; 
		for(i=1;i<=2*n-1;i++){
			for(j=0;j<n-i;j++) printf(" ");
			for(j=0;j<i&&i<n+1;j++) printf("%c",m-j);
			for(j=0,k=1;j<i-1&&i<n+1;j++) printf("%c",'B'+n-i+j);
			for(j=0;j<i-n;j++) printf(" ");
			for(j=2*n-i,k=0;j>0&&i>n;j--,k++) printf("%c",m-k);
			for(j=2*n-i-1,k=0;j>0&&i>n;j--,k++) printf("%c",'B'+i-n+k);
			printf("\n");
		}
//	for(i=0;i<2*n-1;i++)for(j=0;j<2*n-1;j++) printf("%c",c[i][j]);		
	}
	return 0;
}
