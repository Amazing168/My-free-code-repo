#include <stdio.h>

int main(){
	int K;
	char a[11],b[11];
	scanf("%d",&K);
	while(K--){
		scanf("%s%s",a,b);
		if(a[0]=='r'){
		 	if(b[0]=='r') printf("Draw\n");
		 	else if(b[0]=='p') printf("Bob\n");
			else  printf("Alice\n");
		 }
		if(a[0]=='s'){
		 	if(b[0]=='s') printf("Draw\n");
		 	else if(b[0]=='r') printf("Bob\n");
			else  printf("Alice\n");
		 }	
		if(a[0]=='p'){
		 	if(b[0]=='p') printf("Draw\n");
		 	else if(b[0]=='s') printf("Bob\n");
			else  printf("Alice\n");
		 }
	}
	return 0 ; 
}
