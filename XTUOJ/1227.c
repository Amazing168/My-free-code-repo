# include <stdio.h>

int main(){
	int T,i,n,b,x,y,dir;
	char s[11];
	scanf("%d",&T);
	while(T--){
		x=y=dir=0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%s",s);
			getchar();
			if(s[0]=='L') dir=(dir+3)%4;	
 			else if(s[0]=='R') dir=(dir+1)%4;
			else if(s[0]=='B') dir=(dir+2)%4;
			else if(s[0]=='F') {
				scanf("%d",&b);
				if(dir==0) y+=b;
				else if(dir==1) x+=b;
				else if(dir==2) y-=b;
				else if(dir==3) x-=b;
			}
		}
		printf("%d %d\n",x,y);
	}
	return 0;
} 
