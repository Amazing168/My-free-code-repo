#include <stdio.h>

int main()
{
	int n,a,b,c,d,e,f,i;
	double m,x;
	scanf("%d",&n);
	for( i=0;i<n;i++){
		scanf("%d %d",&a,&b);
	    scanf("%d %d",&c,&d);
		scanf("%d %d",&e,&f);
	if((a-c)!=0&&(c-e)!=0){
			
			m=(b-d)/(a-c);
			x=(d-f)/(c-e);
				if(m==x){
					printf("Yes\n");
			
					
		}
				else{
					printf("No\n");
		
		}
		}
		   else if((a-c)==0&&(c-e)==0){
			  if ((b-d)==0&&(d-f)==0){
				printf("Yes\n");
			}
			}
			else{ 
				printf("No\n");
			}
		
			}
			
			
			
			

	              
             return 0;
}

