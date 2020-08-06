#include <stdio.h>

int main ()
{ 	int n,i;
	scanf ("%d",&n);
	while(n!=0){
		if(n==1){
		printf("No\n");
			}
		if(n==2){
				printf("Yes\n");
		}
		for(i=2;i<n;i++){
			if(n%i==0){
			printf("No\n");
			break;
			}
			printf("Yes\n");
			break;
			}
		
		scanf("%d",&n);
	}
    return 0;
} 
