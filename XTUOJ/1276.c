#include<stdio.h>

int main (){
	int K,l,n,m; 
	scanf("%d",&K);
	while(K--){
		scanf("%d%d",&n,&m);
		if(n==m) printf("None\n");
		else if(n>m){
			l=n-m;
			if(l%2) printf("Bob %d.5\n",l/2);
			else printf("Bob %d\n",l/2);
		} 
		else  {
			l=m-n;
		 	if(l%2) printf("Alice %d.5\n",l/2);
		 	else printf("Alice %d\n",l/2);
		}
	} 
	return 0;
}
