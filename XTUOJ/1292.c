
// ���ⰴ�����ⰴ��ģ�⼴�ɣ���������ⶼ�Ǹ������ġ� 

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
