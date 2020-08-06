# include<stdio.h>
# include<string.h>


int main(){
	int N,i,s,j,k,cnt,m,n,l;
	char a[1000];
	scanf("%d",&N);
	for (i=0;i<N;i++){
		scanf("%d",&n);
		if(n==0){
			printf("%c\n",'0');
			continue;
		}	
		cnt=0;
		for(j=n,k=0;j>0;k++){
		if((j+1)%3==0){
			a[k]='-';
			j=(j+1)/3;
		}
		else if((j-1)%3==0){
			a[k]='1';
			j=(j+1)/3;
		}
		else {
			a[k]='0';
			j/=3;
		} 
			cnt++;
			
		}	
	for(l=cnt-1;l>=0;l--){
		printf("%c",a[l]);
	}
	printf("\n"); 
	}
	return 0;	
} 
