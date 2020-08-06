#include<stdio.h>
#include<string.h> 

int main(){
	int K,i,j,len,flag,l,cnt;
	char a[33];
	char b[33][10]={{"auto"},{"break"},{"case"},{"char"},{"const"},{"continue"},{"default"},{"do"},{"double"},{"else"},{"enum"},{"extern"},
					{"float"},{"for"},{"goto"},{"if"},{"int"},{"long"},{"register"},{"return"},{"short"},{"signed"},{"sizeof"},{"static"},{"struct"},
					{"switch"},{"typedef"},{"union"},{"unsigned"},{"void"},{"volatile"},{"while"}};
				
	scanf("%d",&K);
	while(K--){
		flag=1;
		scanf("%s",a);
		len=strlen(a);
     	for(i=0;i<len;i++){
            if((a[i]>=48&&a[i]<=57) || (a[i]>=65&&a[i]<=90) || (a[i]>=97&&a[i]<=122) || a[i]==95) continue;
            else{flag=0; printf("No\n");break;}
        }
		if(flag){
			if(a[0]=='0'||a[0]=='1'||a[0]=='2'||a[0]=='3'||a[0]=='4'||
				a[0]=='5'||a[0]=='6'||a[0]=='7'||a[0]=='8'||a[0]=='9')  { flag=0;printf("No\n");}
		} 
		if(flag){
			for(j=0;j<32;j++){
				l=strcmp(a,b[j]);//strcmp!!!!ÏàÍ¬·µ»Ø0£¡£¡ 
				if(l==0) break;
			} 
				if(l==0) printf("No\n");
				else printf("Yes\n");
		} 	
	}
	return 0;
}
