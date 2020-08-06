# include<stdio.h>
#define p  1000003
__int64 a[1111];
int main(){
	__int64 n,m,i,j;
	while(scanf("%I64d%I64d",&n,&m)!=EOF){
		a[1]=m;a[2]=m*(m-1);a[3]=m*(m-1)*(m-2);
		if	(n>3) for(i=4;i<=n;i++) 
			a[i]=(a[i-1]*(m-2)%p+a[i-2]*(m-1)%p)%p;
		printf("%I64d\n",a[n]);		
	}
		return 0;
}
