# include <stdio.h>

int main()
{
	int n,i,a,b,c,d;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf ("%d %d %d",&a,&b,&c);
			d=b*b-4*a*c; 
		if(a==0&&b==0&&c==0){
			printf("INF\n");
			continue;
		}
		else if(a=0&&b!=0&&c!=0){
			printf("%d") 
		}
    	else if (d<0){
			printf("0\n"); 
		}
		else if(d==0){
			printf("1\n");
		}
        else if (d>0){
        	printf("2\n");
		}
	}

         
   return 0;
}