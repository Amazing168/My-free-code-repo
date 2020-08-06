# include <stdio.h>

int main(){
	int a[3]={11,1001,1111};
	int T,n,i,cnt,j,t,min;
	scanf("%d",&T);
	while(T--){
		min=100000000;
		scanf("%d",&n);
		if(n%11) printf("0\n"); // 不是11的倍数直接输出0； 
		else{
			for(i=0;i<=n/1111;i++){
				j=n-1111*i;
				cnt=i+j/1001+j%1001/11;
				if(cnt<min) min=cnt;
				
			}	
		
		 printf("%d\n",min); 
		}
	
	} 
	return 0; 
}
