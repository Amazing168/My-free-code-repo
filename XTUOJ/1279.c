# include <stdio.h>
# define  M 1000003
int a[M],b[M],c[M],su[M],cnt;
int main(){
	int i,j;
	a[1]=1;
	a[2]=0;
	b[1]=0;
	b[2]=0;
	c[1]=0;
	c[2]=0;
	cnt=0;
	for(i=2;i*i<=M;i++){
		if(!a[i]) {
	   	su[cnt++]=i;
		for(j=i*i;j<=M;j+=i) a[j]=1;
		}
	}
	
	for(i=3;i<M;i++){
		for(j=0;j<cnt;j++) if(i%su[j]==0&&su[j]!=0&&a[i/su[j]]==0&&(i/su[j])!=su[j]){
		 b[i]=1;
		 break;
		 }
	}	
	for(i=3;i<M;i++){if(b[i]) c[i]=c[i-1]+1;
					else c[i]=c[i-1];
	}
	int T,a,b;
	scanf("%d",&T);
	while(T--){
		scanf("%d%d",&a,&b);
		printf("%d\n",c[b]-c[a]);
	}
	return 0;
} 
