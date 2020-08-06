// 即求某区间（设为1-b）里既不是2的倍数数的个数（先用b/2求2的倍数有几个）
//又不是3的倍数（同理求3的）的有几个，再用b减去前面两个数的和即可。 
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
