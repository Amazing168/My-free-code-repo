#include <stdio.h>
#include <math.h>


int main()
{
	__int64 n,i,sp,k;
	scanf("%l64d",&n);
	while(n!=0){
		sp=1;
		if(n==1){
		sp=0;
		}
		if(n%2==0){
			sp=0;
		}
		if(n==2){
			sp=1;
		}
		else{ 
		    k=(int)sqrt( (double)n);
			for(i=3;i<=k;i+=2){
				if(n%i==0){
					sp=0;
					break;
				}
			}
			}
			if(sp==1){
				printf("Yes\n");
			}	
			else{
				printf("No\n");
			}
		
				scanf ("%l64d",&n);
	}
	
	return 0;	
}
