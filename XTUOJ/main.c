# include<stdio.h>

int main(){
	int k,i,j,l,flag,cnt;
	int a[20003];
	int b[20003];
	int c[20003];
	a[0]=0;
	b[0]=0;
	c[0]=0;
	scanf("%d",&k);
	while(k!=0){
		flag=1;
		cnt=0;
		for(i=1;i<=2*k;i++){
			a[i]=i;
			c[i]=i;
		}
		while(flag==1){
		 for(i=1;i<=2*k;i++) b[i]=a[i];
		 for(j=1;j<=2*k;j++){
		 	if(j%2==1) a[j]=b[k+j];
		 	else a[j]=b[j/2];
		 }
		 cnt++;
		 for(l=1;l<2*k;l++){
		 	if(a[l]==c[l]) continue;
		 	else break;
		 }
		 if(l==2*k) flag=0;
		}
		printf("%d\n",cnt);
		scanf("%d",&k);
	}
	return 0;
}
