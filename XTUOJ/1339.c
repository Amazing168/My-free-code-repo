# include<stdio.h>
# define M 2000020 

int a[M],c[M],b[M],d[M];
int main(){

	a[0]=1;a[1]=1;
	int i,j,cnt;
	cnt=0;
	d[0]=d[1]=d[2]=d[3]=0;
	for(i=2;i<M;i++){
		if(!a[i]) {
		for(j=i*2;j<M;j+=i) a[j]=1;
		c[cnt++]=i;	   
	   }
	}
	for(i=1;i<cnt;i++){
		if((c[i]+c[i+1])%2==0) b[(c[i]+c[i+1])/2]=1;
	}
	for(i=3;i<M/2;i++){
		if(b[i]) d[i]=d[i-1]+1;
		else d[i]=d[i-1]; 
	}
	int T,x,y;
	scanf("%d",&T);
	while(T--){
		scanf("%d%d",&x,&y);
		printf("%d\n",d[y]-d[x-1]);	
	} 
	return 0;
}
