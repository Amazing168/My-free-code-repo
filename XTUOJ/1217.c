#include <stdio.h>

int main(){
	int n,i;
	int	a[13]={1,4,5,9,10,40,50,90,100,400,500,900,1000 } ; 
	char b[13][3]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};

	 while(scanf("%d",&n)!=EOF){
		for(i=12;i>=0;i--){
			while(a[i]<= n){
			n=n-a[i];
			printf("%s",b[i]);
			if(n==0) break;
			}
		}
		printf("\n");
	}
	return 0;
}
