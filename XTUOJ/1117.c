# include  <stdio.h>

int main()
{   int a,b,n,i,j,k,m,z;
	int cnt,sum;
	scanf("%d",&k);
	
		for(i=0;i<k;i++){
				scanf("%d %d %d",&a,&b,&n);
				cnt=0;
		for(z=a;z<=b;z++){
				sum=0; 
				j=z; 
		while (j>0){
				m=j%10;
				sum=sum+m*m;
				j/=10;
			}
				sum%=10; 
			if(sum==n){
				cnt++;
			}
		} 
			printf("%d\n",cnt);
		}	
	return 0; 
} 
