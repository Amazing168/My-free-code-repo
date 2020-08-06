# include<stdio.h>
# include <string.h>

int main(){
	char s[1111];
	int cnt,max,i,j;
	while(gets(s)){
		cnt=1;
		max=0;
		for(i=0;i<strlen(s);i++){
			if(s[i+1]==s[i]+1) cnt++;
			else cnt=1;
			if(cnt>max) max=cnt; 
		} 
		printf("%d\n",max);
	}	
	return 0;
}
