# include <stdio.h>
# include <string.h>
# define max 100000000
int a[max];

int main(){
	int K,i,j,b,k,l,flag; 
	a[1]=1;
	for(i=2;i*i<max;i++){
		if(!a[i]) for(j=i*i;j<max;j+=i) a[j]=1;	
	}
	
	char s[11];
	scanf("%d",&K);
	while(K--){
		flag=1;
		j=0;
		b=1; 
		scanf("%s",s);
		if(l){	if(a[0]) flag=0;} 
		else{
			for(i=0;i<l;l++) if(a[i]='0') flag=0;
			for(i=1;i<l;i++){
						k=a[i]-'0';
						j+=k;
						if(i!=(l-1)){j*=10;	b*=10;}	
					
			}
		printf("%d",b);
		} 
	
	}
	return 0; 
} 
