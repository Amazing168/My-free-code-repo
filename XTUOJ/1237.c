# include <stdio.h>
# define max 5000009
int a[max];
int p[max];
int main(){
	int K,b,i,j,k,l,cnt;
	a[0]=1;
	a[1]=1;
	for(i=2;i*i<=max;i++){
		if(!a[i]){
			for(j=i*i;j<=max;j+=i) a[j]=1;
		} 
	}
	p[0]=p[1]=p[2]=p[3]=p[4]=0;
	for(j=2;j<=max-2;j++){
		if(a[j]==0&&a[j+2]==0) p[j+2]=p[j+1]+1;//ǰ׺��ע������ÿ��Ԫ�ش����ʲô����  
		else p[j+2]=p[j+1]; //���Դ��뼸����С����������֤�� 
	}
	scanf("%d",&K);
	while(K--){
		scanf("%d%d",&k,&b);
		cnt=0;
		if(b-k>=2) cnt=p[b]-p[k+1];//ע�� k+1 ���״������ʲô���� 
		printf("%d\n",cnt);
	}
	return 0;
}
