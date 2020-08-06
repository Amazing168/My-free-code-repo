# include<stdio.h>

int main(){
	int n,m;
	char s[11];
	while(scanf("%d%d%s",&n,&m,s)!=EOF){
		getchar();
	
		if(s[0]=='A') {
			if(n<m||n==0||m==0||(n-m)%2==1) printf("Impossible\n");
				//m!=0二者有胜负就一定会有分差！！！ 
			else printf("%d:%d\n",(n-m)/2+m,(n-m)/2);	
		
		}	
		else if(s[0]=='B'){
			if(n<m||n==0||m==0||(n-m)%2==1) printf("Impossible\n");
			else printf("%d:%d\n",(n-m)/2,(n-m)/2+m);
		}
		else if((n%2)==1||m) printf("Impossible\n");        
		else printf("%d:%d\n",n/2,n/2);
	}
	return 0;
}
