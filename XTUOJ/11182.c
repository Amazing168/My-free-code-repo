# include <stdio.h>

int main()
{
	int n,i,a,b,c,d;
	scanf("%d",&n);
	for(i=1;i<n;i++){
		scanf ("%d %d %d",&a,&b,&c);
		if(a==0&&b==0&&c==0){
			printf("INF");
			continue;
		}
		else{
		
		d=b*b-a*c*4;
		if(d<0){printf("%d",0);
		continue;
		}
		else if(d=0){
			printf("%d",1);
			continue;
		}
		else{prinf("%d",2);
		continue;
		}
	}
}
             return 0;
}
