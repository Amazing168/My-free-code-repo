# include <stdio.h>

int main()
{	int n,i,a,b,c,k=1;
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d %d %d",&a,&b,&c);
		if(a==0&&b==0&&c==0){
			printf("None");
			continue;
		}
		if(c==1&&a==b){
			printf("0\n");
			continue;
		}
		else if(c!=1&&(a-b*c)*(c-1)>=0&&(a-b*c)%(c-1)==0){
			printf("%d",(a-b*c)/(c-1));
			k=0;
	}
		if(k){
		 printf("None");
		 }

	}
	return 0;
}

