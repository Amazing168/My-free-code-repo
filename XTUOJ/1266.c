# include<stdio.h>
# include<string.h>

int main(){
	int r,g,b,i,j,l,cnt;
	char s[10010];
	while(scanf("%s",s)==1){
		l=strlen(s);
		r=g=b=0;
		cnt=0;
		for(i=0;i<l;i++){
			if(s[i]=='R') r++;
			else if(s[i]=='G') g++;
			else  b++;
		}	
		for(i=0;i<r;i++){
			if(s[i]!='R'){
				if(s[i]=='G'){
					for(j=r;j<l;j++){
						if(s[j]=='R'){
							cnt++;s[j]='G';break;
						}
					}
				}
				else{
					for(j=l-1;j>r;j--){
						if(s[j]=='R'){
							cnt++;s[j]='B';break;
						}
					}	
				}
			}
		}
		for(i=r;i<r+g;i++){
			if(s[i]!='G'){
				for(j=r+g;j<l;j++){
					if(s[j]=='G'){
						cnt++;s[j]='B';break;
					}
				}
			}	
		}
		printf("%d\n",cnt);
	}
	return 0;
} 
