# include <stdio.h>

int main (){
	int a[1111],f[1111],n,i,cnt,ans;
	while(scanf("%d",&n)!=EOF){
		for(i=1;i<=n;i++) scanf("%d",&a[i]);		
		cnt=ans=0;
		for(i=1;i<=n;i++) f[i]=0;
		while(cnt!=n){			//cnt 判断是否完成 
			for(i=1;i<=n;i++)   //向右走 
				if(f[i]==0&&cnt>=a[i]) {f[i]=1;cnt++;}
			if(cnt==n) break;
			ans++;
			for(i=n;i>=1;i--)  //向左走 
				if(f[i]==0&&cnt>=a[i]) {f[i]=1;cnt++;}  
			if(cnt==n) break;
			ans++;
		}
	printf("%d\n",ans);
	}
	return 0;
}
