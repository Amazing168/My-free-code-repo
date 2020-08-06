# include<stdio.h>

int main(){
	int t,n,k,i,j,f,a[1111];
	scanf("%d",&t);
	while(t--){
		f=1;
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++) scanf("%d",&a[i]);
		j=a[k-1];
		for(i=k;i<n&&f;i++) {
			if(a[i]!=j){f=0;printf("-1\n");}  
		}
		if(f) for(i=k-1;i>0;i--) {
				if(a[i-1]!=j) {
					printf("%d\n",i);
					f=0;
					break;
					}
				}
		if(f) printf("0\n");

    }
    return 0;
}
 
