#include<stdio.h>
#include<string.h>

int main(){
	int K,l,i,j,k; 
	char a[11],b[11],c[22];
	scanf("%d",&K);
	while(K--){
		scanf("%s %s",a,b);
		l=strlen(a);
		for(i=0;i<2*l-1;i++) if(i%2==0) c[i]=a[i/2]; 
		for(j=l-2,k=1;j>=0;j--,k+=2)  c[k]=b[j];
		for(i=0;i<2*l-1;i++) printf("%c",c[i]);
		printf("\n");
	} 
	return 0; 
}
 
