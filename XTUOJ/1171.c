# include<stdio.h>

int main(){
	int n,a[55],i;
	scanf("%d",&n);
	a[1]=2;a[2]=3;
	for(i=3;i<55;i++) a[i]=a[i-1]+a[i-2]; 
	while(n!=0){
		printf("%d\n",a[n]);
		scanf("%d",&n);
    }
	return 0;
}
