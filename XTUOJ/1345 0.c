#include<stdio.h>
#include<string.h>
#define max 2100000 
int a[max+11];
int x[11][max/2+11];
char s[max/2+11];  //全部初始化为串结束符。
int main(){
	int t,l,r,i,j,d,k,flag=0,p,q;
	for(i=2;i*i<=max;i++){
		if(!a[i]){
			for(j=i*i;j<=max;j+=i)  a[j]=1;
			
		}
	} 
	for(i=2;i<=max;i++){
		if(!a[i]){
			p=i;
			k=0;
			while(p){
				p/=10;
				k++;
			}
			p=i;
			while(p){
				s[flag+k-1]=p%10+'0';  //这里赋值了多少个字符，与strlen是对应的。 
				flag++;
				k-=2;
				p/=10;
			}
		}
	}
	x[2][0]=1;
	for(i=1;i<flag;i++){  //这里用strlen就运行不下去了，为啥？ 
		if(s[i]=='0')  x[0][i]+=(x[0][i-1]+1);  //用二维数组就可以存对应的d值时的数组。 
		else  x[0][i]=x[0][i-1];
		if(s[i]=='1')  x[1][i]+=(x[1][i-1]+1);  //这里不用写的这么复杂，再写个循环就好啦啊！ 
		else  x[1][i]=x[1][i-1];
		if(s[i]=='2')  x[2][i]+=(x[2][i-1]+1);
		else  x[2][i]=x[2][i-1];
		if(s[i]=='3')  x[3][i]+=(x[3][i-1]+1);
		else  x[3][i]=x[3][i-1];
		if(s[i]=='4')  x[4][i]+=(x[4][i-1]+1);
		else  x[4][i]=x[4][i-1];
		if(s[i]=='5')  x[5][i]+=(x[5][i-1]+1);
		else  x[5][i]=x[5][i-1];
		if(s[i]=='6')  x[6][i]+=(x[6][i-1]+1);
		else  x[6][i]=x[6][i-1];
		if(s[i]=='7')  x[7][i]+=(x[7][i-1]+1);
		else  x[7][i]=x[7][i-1];
		if(s[i]=='8')  x[8][i]+=(x[8][i-1]+1);
		else  x[8][i]=x[8][i-1];
		if(s[i]=='9')  x[9][i]+=(x[9][i-1]+1);
		else  x[9][i]=x[9][i-1];
	}
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d",&l,&r,&d);
		if(s[l-1]==d+'0'){
			if(l==r)  printf("0\n");
			else  printf("%d\n",x[d][r-1]-x[d][l-1]+1);
		}  //不能直接写=='d'，这样子是等于字母d，而不是变量d。 
		else  printf("%d\n",x[d][r-1]-x[d][l-1]);
		//printf("%d%d\n",x[d][r-1],x[d][l-1]);
	} 
	return 0;
}
