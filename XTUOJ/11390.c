#include <stdio.h>

int prime(int n){
    int i;
 
	for(i=2;i*i<=n;i++){
		if(n%i==0){
			return 0;
		}

		}  
	return 1;
}
 
 int main(){
 	int K,x,i,j,k,l,flag;
	scanf("%d",&K);
 	while (K--){
 		scanf("%d",&x);
 	//	if(x==1||x==2||x==3||x==4)	printf("NO\n");
	//	else {
			for(i=2;i*i<=x;i++){
				if(x%i==0){
					if(prime(i)&&prime(x/i)&&i!=(x/i)){
						printf("Yes\n"); break;
					}
					else {printf("No\n");break;}
				}
				/*if(prime(i)&&(x%i)==0&&prime(x/i)) {
					if(i==(x/i)) {
						printf("N0\n"); break;
					}
					 	else {
					 	printf("Yes\n"); break;
					 } 
			*/	}
	//		}	
		
		if(i*i>x) 	printf("N0\n");

}
	 return 0;
}
