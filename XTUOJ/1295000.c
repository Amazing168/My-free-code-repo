# include <stdio.h>

int main(){
	char s[3];
	int i,j,k,b;
		scanf("%s",s);
		j=0;
		b=1;
		for(i=0;i<3;i++){
						k=s[i]-'0';
						j+=k;
						if(i!=2) {j*=10;	b*=10;}	
					
						}
	printf("%d %d",b,j);
	return 0;
}
