# include <stdio.h>

	
	int  a[9][13],ans[6][88],top[9],K,n,t,s,e,i,j,k,cnt;
	char c[6],b[6][9]={"","Mon","Tue","Wen","Thur","Fri"};
int main(){
	scanf("%d",&K);
	while(K--){
		cnt=0;
		scanf("%d%d",&n,&t);	
		for(i=1;i<7;i++) for(j=1;j<12;j++) a[i][j]=0;//memset(a, 0, sizeof(a));
		for(i=1;i<7;i++) for(j=1;j<89;j++) ans[i][j]=0;//memset(ans, 0, sizeof(ans));
		for(i=1;i<9;i++) top[i]=0;//memset(top, 0, sizeof(top));
		while(n--){
			scanf("%s %d %d",c,&s,&e);
			if(c[0]=='M')			for(i=s;i<=e;i++) a[1][i]=1;  
			if(c[0]=='T'&&c[1]=='u')for(i=s;i<=e;i++) a[2][i]=1;	
			if(c[0]=='W')			for(i=s;i<=e;i++) a[3][i]=1;
			if(c[0]=='T'&&c[1]=='h')for(i=s;i<=e;i++) a[4][i]=1;
			if(c[0]=='F') 			for(i=s;i<=e;i++) a[5][i]=1;
		}
		for(i=1;i<=5;i++){
			for(j=1;j<=11;j++){
				for(k=j;k<=j+t-1;k++) 
					if(a[i][k]==0&&
					((k<=4&&j<=4)||(j>4&&j<=8&&k<=8)||(j>8&&k<=11)))
						continue;
					else break;
					if(k==j+t) {
						ans[i][++top[i]]=j;
						ans[i][++top[i]]=k-1;
						cnt++; 
					}   
			}
		
		}
		printf("%d\n",cnt);
		for(i=1;i<6;i++)
			for(j=1;j<=top[i];j+=2){
				printf("%s %d %d\n",b[i],ans[i][j],ans[i][j+1]);	
			}
	}
	return 0;
} 
