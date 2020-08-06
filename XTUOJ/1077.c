# include <stdio.h>

int main()
{	
	int n,i,j,k,t,m;
	int a=1;
	int b=1;
	
	scanf ("%d",&n);
	while (n!=0){	
	    printf("case %d:\n",a);
	    t=n;
	    m=n;
		for(i=1;i<n+1;i++){
			for(j=0;j<t-1;j++){
				printf(" ");
			}
			for(k=0;k<2*i-1;k++){
				printf("%d",b);
				}
				printf("\n");
				t--;
				b++; 
						
		} 
			b=1;
			  scanf("%d",&n);
			  a++;
	}
	return 0;
}
