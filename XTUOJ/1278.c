# include <stdio.h> 
# include <stdlib.h>
int cmp(const void *a, const void *b){
	return *(int*)a-*(int*)b;
} 

int main(){
	int T,i,flag,N,a[11111];
	scanf("%d",&T);
	while(T--){
		flag=1;
		scanf("%d",&N);
		for(i=0;i<N;i++) scanf("%d",&a[i]);
		qsort(a,N,sizeof(a[0]),cmp);
	//	printf("%d %d %d ",a[0],a[1],a[2]);
		for(i=1;i<N-1;i++) if((2*a[i])!=(a[i-1]+a[i+1])){flag=0;break;}
		if(flag) printf("Yes\n");
		else printf("No\n");
		} 
	return 0;
}
