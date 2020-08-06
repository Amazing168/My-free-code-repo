#include<stdio.h>
#include<string.h>

int main(){
	int N,i,j,k,l,c,d,cnt,min;
	char a[201];
	char b[201];
	scanf ("%d",&N);
	for(i=1;i<=N;i++){ 
		min=222;
		scanf("%d",&j);
		scanf("%s",&a);
		for(k=0;k<j-1;k++){
			cnt=0;
			scanf("%s",&b);
		
			for(c=0,d=0;c<strlen(b);c++,d++){
					
				if(a[c]==b[d]){
					cnt++;
				}	
				else break;
			}
		//	printf("%d\n",cnt);	
			if(cnt<min){
					min=cnt;
					}
	//	   	printf("%\n",min);
		}
		
		
		
	printf("Case %d: ",i);
	for(l=0;l<min;l++){
		printf("%c",a[l]); 	
		}
	printf("\n");	
} 
}
