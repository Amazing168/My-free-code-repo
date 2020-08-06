# include <stdio.h>

void swp(int*a,int*b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int main(){
	int K,a,b,c,d,e,f,t;
	scanf("%d",&K);
	while(K--){
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a>b) swp(&a,&b);
		if(b>c) swp(&b,&c);
		if(a>b) swp(&a,&b);
		if(d>e) swp(&d,&e);
		if(e>f) swp(&e,&f);
		if(d>e) swp(&d,&e);		
		if(a*e==b*d&&b*f==c*e) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
