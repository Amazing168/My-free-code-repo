// ����ĳ���䣨��Ϊ1-b����Ȳ���2�ı������ĸ���������b/2��2�ı����м�����
//�ֲ���3�ı�����ͬ����3�ģ����м���������b��ȥǰ���������ĺͼ��ɡ� 
# include <stdio.h>

int shu(int b){
	int a3,a2,a6;
	a3=b/3;
	a2=b/2;
	a6=b/6;
	return b-(a2+a3-a6);
} 

int main(){
	int K,a,b,s,l;
	scanf("%d",&K);
	while(K--){
		scanf("%d%d",&a,&b);
		s=shu(a-1);
		l=shu(b);
		printf("%d\n",l-s); 
	}
	return 0;
} 
