# include <stdio.h>

int main()
{	int n,i,a,b,c,d,m,sum,t;
	scanf("%d",&n);
	while (n!=0){
		a=n;
		t=a;
		sum=0 ;
		for(i=1;n>10;i++){
			n/=10;
		}
		for(c=0;c<i;c++){
		    m=a%10;
		    a/=10;
			d=1;	
		for(b=0;b<i;b++){
			d*=m;
			 }
			 sum+=d;
		}
	   if (sum==t){
		printf("Yes\n");
		}	
	else{
		printf("No\n");
		}
			scanf("%d",&n);
		}
	



	return 0;

}
