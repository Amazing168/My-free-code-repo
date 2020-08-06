# include<stdio.h>

int main(){
	int k,i,j,l,f,flag,cnt;
	scanf("%d",&k);
	l=2*k+2;
	while(k!=0){
		int a[l];
		int b[l];
		a[0]=0;
		a[1]=1;
		b[0]=0;
		b[1]=1;
		flag=1;
		cnt=0;
		while(flag==1){
		 for(i=1;i<=2*k;i++) b[i]=a[i];
		 for(j=1;j<=2*k;j++){
		 	if(j%2==1) a[j]=b[k+(j+1)/2];
		 	else a[j]=b[j/2];
		 }	
		 cnt++;
		if(a[1]==1)	flag=0;
		}
		printf("%d\n",cnt);
		scanf("%d",&k);	
	}
	return 0;
} 
