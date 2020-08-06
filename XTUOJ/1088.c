#include <stdio.h>

int main()
{
	int n,m;
	int a=1;
	scanf("%d",&n);
	while(n!=-1)
	{
		for (m=1;m<n+1;m++)
		{
			a*=m;
			a=a%10007;
			
			
    	}
		printf("%d\n",a);
		a=1;
		scanf("%d",&n);
	}	
	return 0;
}

