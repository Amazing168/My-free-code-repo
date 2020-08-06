#include <stdio.h> 

int main()
   {int i,n,x,m;
	double cnt;
	scanf("%d\n",&i);

	  for(n=0;n<i;n++){
	  
	   	 scanf("%d %d",&x,&m);
	     cnt=x*m/2.0;
	     printf("%.1f\n",cnt);
        
	}
		
	   
	return 0;
}


