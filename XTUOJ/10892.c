#include <stdio.h>

int main(){
    int n,i,cnt;
    while(~scanf("%d",&n)){
      
            for(i=2;i*i<=n;i++){
            	cnt=0;
            	while(n%i==0){
            		cnt++;
					n/=i; 
			}
               if(cnt!=0)
			   { printf("%d",i);
            	if(cnt>1){
                printf("^%d",cnt);
            }
            	if(n!=1){
                printf("*");
            }
                }
				else{
                    continue;
                }
            }
        	if(n!=1){
        			printf("%d",n); 
			} 
    		printf("\n");
    
        }
    return 0;
} 
