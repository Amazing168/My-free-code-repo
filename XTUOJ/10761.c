#include <stdio.h>

int main ()
{     int n,i,sp;
    scanf ("%d",&n);
    while(n!=0){ 
    	sp=1;
		if(n==1||n==4) {
			sp=0;
		}
		if (n%6!=1&&n%6!=5) {
      		sp=0;
		}
		if(n==2||n==3){
			sp=1;
		}
		else{
                  
    for(i=5;i*i<=n;i+=6){ 
        if(n%i==0||n%(i+2)==0){ 
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
		   scanf("%d",&n);
    } 
    return 0;
}
