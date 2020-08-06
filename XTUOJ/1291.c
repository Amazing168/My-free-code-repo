# include <stdio.h>
# include <stdlib.h>//qsort排序！！！必须会盲打！！ 

int cmp(const void *a,const void *b){
	return *(int*)a-*(int*)b; //这是从小到大排序，若是从大到小改成： return *(int *)b-*(int *)a;
} 
int main(){
	int K;
	int i,j,k,n,m,mi,min,cnt,cnt0,a[1111];
	scanf("%d",&K);
	while(K--){
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++) scanf("%d",&a[i]);
		qsort(a,n,sizeof(a[0]),cmp);
		cnt=0;
		mi=a[m-1]-a[0];
		for(k=0;k<m;k++) cnt+=a[k];	 
	//	printf("%d %d\n",mi,cnt);
		for(j=0;j<n-m+1;j++){
			cnt0=0;
			min=a[j+m-1]-a[j];
			for(k=0;k<m;k++) cnt0+=a[j+k];
	//		printf("%d %d ",min,cnt0);
			if(min<mi) {mi=min;cnt=cnt0;}

		}
		printf("%d %d\n",mi,cnt);
	}
	return 0;
}
