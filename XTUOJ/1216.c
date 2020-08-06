#include <stdio.h>
#include <string.h>

int main(){
	char s[33];
	int l,i,j,k,sum;
	while(gets(s)){
		sum=0;
		int a[33];
		a[0]=0;
		l=strlen(s);
		for(i=0;i<l;i++){
			if(s[i]=='I') a[i]=1;
			if(s[i]=='V') a[i]=5;
			if(s[i]=='X') a[i]=10;
			if(s[i]=='L') a[i]=50;	
			if(s[i]=='C') a[i]=100;
			if(s[i]=='D') a[i]=500;
			if(s[i]=='M') a[i]=1000;
		}
		a[l]=0;
		for(j=0;j<l;j++){
			if(a[j]<a[j+1]) sum-=a[j];
			else sum+=a[j]; 
		}
		printf("%d\n",sum);
	} 
	
	return 0;
}
