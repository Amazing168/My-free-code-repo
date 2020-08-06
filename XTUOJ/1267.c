 #include<stdio.h>
 
 int b[10000][10000];
 
 void  swp(int*p,int*q){
 			int t;
 			t=*p;
 			*p=*q;
 			*q=t;
 }
 
 int main (){
 	 b[0][0]=1;
 	char a[11];
 	int cs,n,m,i,x,y,j,k,l;
 	while(scanf("%s",a)==1){
 		if(a[0]=='I'){
 			scanf("%d%d",&n,&m);
 			cs=1;
 			for(i=1;i<=n;i++){
 				for(j=1;j<=m;j++){
 					b[i][j]=cs;
 					cs++;
				 }
			 }
		 }
		else if(a[0]=='S'){
		 	scanf("%d%d",&x,&y);
		 	if(a[1]=='R'){
		 		for(j=1;j<=m;j++)
		 			swp(&b[x][j],&b[y][j]);
			}
			 else{
			 	for(j=1;j<=n;j++) 
				 	swp(&b[j][x],&b[j][y]); 
				}
			}
		 
		else if(a[0]=='T'){
		 	for(j=1;j<=n;j++)
			 	for(k=1;k<=m;k++)
			 		swp(&b[j][k],&b[k][j]); 
		 }
		else if(a[0]=='F'){
		 		if(a[1]=='R'){
		 			for(j=1,k=n;j<k;j++,k--)
		 				for(l=1;l<=m;l++)
		 				swp(&b[j][l],&b[k][l]); 
				 }
				 else {
				 	for(j=1,k=m;j<k;j++,k--)
		 				for(l=1;l<=n;l++)
		 				swp(&b[l][j],&b[l][k]);
				 }	
		 } 
		else {
		 	for(i=1;i<=n;i++){
		 		for(j=1;j<=m;j++){
		 			printf("%d",b[i][j]);
		 			if(j!=m){
		 				printf(" ");
					 }
				 }
				printf("\n"); 
			 }
		 	printf("\n"); 	
		 }	
	 }
 	return 0;
 } 
