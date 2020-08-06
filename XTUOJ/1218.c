 # include <stdio.h>

int main(){
	int a,b,i,c,cnt,n, e;
	scanf("%d",&n);
	while (n--){
		scanf("%d%d",&a,&b);
		c=a+b;
		cnt=1;
		for(i=2;i*i<=c;i++){
			if(c%i==0){
				e=1;
				while(c%i==0){
					c/=i;
					e++;
				}
				cnt*=e;
			}
			}
		if(c!=1)	printf("%d\n",cnt*2);
		else printf("%d\n",cnt);
	}
	return 0;
}
