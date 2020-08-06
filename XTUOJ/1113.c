# include <stdio.h>

int main() 
{	int n,i,a,b,c,d;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		scanf("%d %d",&c,&d);
		if((a>=c&&a<=d)||(b>=c&&b<=d)||(c>=a&&c<=b)||(d>=a&&d<=b)){
			printf("Yes\n");
		}
		else{printf("No\n");
		} 
	return 0;
}
}
