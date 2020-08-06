# include<stdio.h>
# include<stdlib.h> 
# include<string.h>

int cmp(const void *a,const void *b){
	return *(__int64*)a-*(__int64*)b; 
} 
__int64 gcd(__int64 a, __int64 b){
	__int64 t;
	while(b){t=a%b;a=b;b=t;}
	return a;
}
int main(){
	__int64 T,a[55],n,i,j,k,r,ld1,ld2,min;
	scanf("%I64d",&T);
	while(T--){

		scanf("%I64d",&n);
		memset(a,0,sizeof(a));
		for(i=0;i<n;i++) scanf("%I64d",&a[i]);
		min=a[0]*a[1]*a[2];
	//	qsort(a,n,sizeof(a[0]),cmp);
		for(i=0;i<n-2;i++){
			for(j=i+1;j<n;j++){
				r=gcd(a[i],a[j]);
				ld1=a[i]*a[j]/r;	
				for(k=j+1;k<n;k++){
					r=gcd(ld1,a[k]);
					ld2=ld1*a[k]/r;
					if(ld2<min) min=ld2;
					//	printf("%d %d \n",ld2,min);  
				}				
			}
			
		}
		printf("%I64d\n",min);
	}
	return 0;d
}
