# include <stdio.h>

int main (){
	char s[12];
	int i,flag,k,l,sum;
	while(scanf("%s",s)!=EOF){
		sum=0;
		for(i=0;i<10;i++){
			if(s[i]=='?') 	flag=i;
			else{
				if (s[i]=='X') s[i]=10+'0'; 
				sum+=(10-i)*(s[i]-'0');
			} 
		}
		for(i=0;i<=10;i++){
			if(((10-flag)*i+sum)%11==0&&i!=10){ //看请题-flag！！ 
				 s[flag]=i+'0';
				 break;
			}
			else if(i=10){ s[flag]='X';break;} //单独判断一下10到底行不不行。 
		}
		if(s[9]==10+'0') s[9]='X';
		printf("%s\n",s); 
	} 
	return 0;
}
