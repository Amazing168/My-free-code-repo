# include <stdio.h>

int main()
{	int n,i,a,b,m;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		 m=a-b;
		 if(m<0){
		 	m=-m;
		 }
		 for(m=m+1;m<a+b;m++){
		 	if (m*m==a*a+b*b){
		 		printf("%d\n",m);
		 		break;
			 }
			 else if(a*a==m*m+b*b){
			 	printf("%d\n",m);
		 		break;
			 }
			 else if(b*b==m*m+a*a){
			 	printf("%d\n",m);
		 		break;
			 }
		 }
				if(m==a+b){
					printf("None\n");	
				}
			
			}
	
	return 0;
}
