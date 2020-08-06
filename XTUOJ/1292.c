
// 本题按照题意按步模拟即可！！，别慌题都是给人做的。 

# include <stdio.h>
# include <string.h>

int main (){
	int K,i,j,k,cnt,l,max;
	char s[1111]; 
	scanf("%d",&K);
	while(K--){
		scanf("%s",s);
		l=strlen(s);
		for(max=l/2;max>0;max--){
			for(i=0;i<l-max;i++){
				cnt=0;
				for(j=i;j<max+i;j++){
					if(s[j]==s[j+max]) cnt++;
					else break;
				}
				if(cnt==max) break;
			}
			if(cnt==max) break;
		}
		printf("%d\n",2*max);
	} 
	return 0;
} 
