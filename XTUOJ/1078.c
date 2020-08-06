# include <stdio.h>

int main ()
{
	char c;
	int i,j;
	int a=1;
	scanf("%c%*c",&c);
	while(c!='#'){
		printf("case %d:\n",a);
			for(i=0;i<c-'A'+1;i++){
			for (j=i;j>0;j--){
				printf(" ");
			}
			for(j='A';j<c-i+1;j++){
				printf("%c",j);
			}
			for (j=c-i-1;j>='A';j--){
				printf("%c",j); 	
			} 
			printf("\n");
		}
		scanf("%c%*c",&c);
		a++;
	} 
	return 0;
} 
