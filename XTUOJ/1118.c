# include <stdio.h>

int main()
{
	int n,i,a,b,c,d;
	scanf("%d",&n);
	for(i=1;i<n;i++){
		scanf ("%d %d %d",&a,&b,&c);
		if(a==0&&b==0&&c==0){
			printf("INF");
		}
		else{
		
		d=b*b-a*c*4;
		if(d<0){printf("0");
		}
		else if(d=0){
			printf("1");
		}
		else{printf("2");
		}
	}
}
             return 0;
}
