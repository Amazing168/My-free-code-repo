# include<stdio.h>

int main(){
	__int64 n,a[1333];
	int i;
	a[0]=1;
	a[1]=2;
	for(i=2;i<=1332;i++) a[i]=a[i-1]+a[i-2];
//	printf("%I64d",a[2]);
	while(scanf("%I64d",&n)!=EOF){
		for(i=1;n>0;i++){
			if(a[i]>n){
		 		printf("%I64d\n",i-1);break;
			}
		}
	}
	return 0; 
} 
