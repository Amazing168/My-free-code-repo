# include <stdio.h>

int main (){
	int a[1111],f[1111],n,i,cnt,ans;
	while(scanf("%d",&n)!=EOF){
		for(i=1;i<=n;i++) scanf("%d",&a[i]);		
		cnt=ans=0;
		for(i=1;i<=n;i++) f[i]=0;
		while(cnt!=n){			//cnt �ж��Ƿ���� 
			for(i=1;i<=n;i++)   //������ 
				if(f[i]==0&&cnt>=a[i]) {f[i]=1;cnt++;}
			if(cnt==n) break;
			ans++;
			for(i=n;i>=1;i--)  //������ 
				if(f[i]==0&&cnt>=a[i]) {f[i]=1;cnt++;}  
			if(cnt==n) break;
			ans++;
		}
	printf("%d\n",ans);
	}
	return 0;
}
