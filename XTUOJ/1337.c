# include <stdio.h>
# include <string.h>

int abs(int a){
	if(a<0) return -a;
	else return a;
} 
int main (){
	char A[111],B[111];
	int a,b,l,i,j,k,T,f;
	scanf("%d",&T);
	while(T--){
		scanf("%s%s",A,B);
		a=strlen(A);b=strlen(B);
		f=1;
		for(i=0;i<a&&f;i++){
			if(B[0]==A[i]) {
				k=i;
				for(j=0;j<b;j++){
					if(B[j]==A[k]) k=(k+1)%a;//以这种方式来实现字符串的环形遍历！！！ 
					else break;
				}
				if(j==b){
					f=0;
					break;
				}
				k=i;
				for(j=0;j<b;j++){
					if(B[j]==A[k]) k=abs((k-1+a))%a;
					else break;
				}
				if(j==b){
					f=0;
					break;
				}
			}
		}
		if(f==0) printf("Yes\n");
		else printf("No\n");
	}
	return 0; 
} 
