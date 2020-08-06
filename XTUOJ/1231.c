#include <stdio.h>

int main(){
	int K,a;
	scanf("%d",&K);
	while(K--){
		scanf("%d",&a);
		if(a>=0&&a<=100) printf("%d\n",200-3*(100-a));
		else printf("%d\n",200+2*(a-100)); 
	} 
	return 0;
} 
