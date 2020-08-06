# include <stdio.h>

int main() 
{	int n,i,a,b,c,d;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		scanf("%d %d",&c,&d);
		if((a>=c&&b<=d)||(a>=c&&d<=b)||(c>=a&&d<=b)||(c>=a&&b<=d)){
			printf("Yes\n");
		}
		else{
		    printf("No\n");
		} 
	return 0;
}
}
