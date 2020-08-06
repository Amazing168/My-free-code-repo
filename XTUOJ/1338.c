# include<stdio.h>

int main(){
	int T,n,i,j,k,l;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			for(j=0;j<n-1&&(i==1||i==n);j++) printf("-"); //输出‘—’； 
			for(j=0;i>2&&i<=n/2&&j<i-2;j++) printf(" "); //行首空格； 
			for(j=0;j<1&&i>1&&i<=n/2;j++) putchar('\\'); 
			for(j=0;j<3+(n/2-3)*2&&i==2;j++) printf(" ");
			for(j=0;j<(n/2-i)*2+1&&i>2&&i<=n;j++) printf("*"); 
			for(j=0;j<1&&i>1&&i<=n/2;j++) putchar('/');
			for(j=n/2-(i-n/2+1);j>0&&i>n/2&&i<=n-2;j--) printf (" "); 
			for(j=0;j<1&&i>n/2&&i<n;j++) putchar('/');
			for(j=0;j<i-n/2-1&&i>n/2+1&&i<n;j++) printf(" ");
		    for(j=0;j<1&&i>n/2&&i<n;j++) printf("*"); 
		    for(j=0;j<i-n/2-1&&i>n/2+1&&i<n;j++) printf(" ");
		    for(j=0;j<1&&i>n/2&&i<n;j++) putchar('\\'); 
			printf("\n");	
		}
	    	printf("\n");
	}
	return 0;
} 
