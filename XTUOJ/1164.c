# include <stdio.h>
# include <string.h>

int main (){
	int i,cnt;
	char s[111];
	while(scanf("%s",s)!=EOF){
			cnt=0;
			for(i=0;i<strlen(s);i++){
				if(s[i]=='0'||s[i]=='4'||s[i]=='6'||s[i]=='9') cnt+=1; 
				else if(s[i]=='8') cnt+=2;
			}
			printf("%d\n",cnt); 
	}
	return 0;
}
