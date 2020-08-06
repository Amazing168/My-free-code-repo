#include <stdio.h>

int main(){
    int n,i,cnt;
    int flag=0;
    while(scanf("%d",&n)!=EOF){
      
            for(i=2;i*i<=n;i++){
            	cnt=0;
            	flag=0;
            	while(n%i==0){
            		cnt++;
            		flag=1;
					n/=i; 
				}
        		if(flag==1){
            			  printf("%d",i);
			 		if(cnt>1){
                		printf("^%d",cnt);
           			}
            		if(n!=1){
             	   		printf("*");
            		}		
           		}
            }
        	if(n!=1){
        			printf("%d",n); 
			} 
    		printf("\n");
    
        }
    return 0;
}
