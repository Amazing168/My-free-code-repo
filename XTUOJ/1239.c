# include<stdio.h> 

int main(){
	int K,a[6][6],i,j,k,l;
	char s[8]; 
	scanf("%d",&K);
	while(K--){
		for(i=1;i<5;i++)for(j=1;j<5;j++)scanf("%d",&a[i][j]);	
		scanf("%s",s);
		if(s[0]=='L'){
			for(i=1;i<5;i++){
				for(j=0;j<4;j++)	if(a[i][1]==0){a[i][1]=a[i][2];a[i][2]=a[i][3];a[i][3]=a[i][4];a[i][4]=0;}
				for(j=0;j<4;j++)	if(a[i][2]==0){a[i][2]=a[i][3];a[i][3]=a[i][4];a[i][4]=0;}
				for(j=0;j<4;j++)	if(a[i][3]==0){a[i][3]=a[i][4];a[i][4]=0;}	
				if(a[i][1]==a[i][2]){
					if(a[i][1]!=0) {
						a[i][1]*=2;a[i][2]=0;
						if(a[i][3]==a[i][4]){
							if(a[i][3]!=0) a[i][2]=a[i][3]*2;a[i][3]=a[i][4]=0;
						}
						else {a[i][2]=a[i][3];a[i][3]=a[i][4];a[i][4]=0;}	
					}
				}
				else{
					if(a[i][2]!=0){
						if(a[i][2]==a[i][3]){
							a[i][2]*=2;a[i][3]=a[i][4];a[i][4]=0;
						} 
						else{
							if(a[i][3]==a[i][4]){
								if(a[i][3]!=0) {a[i][3]*=2;a[i][4]=0;}
							}
						}	
					}
				}
			}
		}
		else if(s[0]=='R'){
			for(i=1;i<5;i++){
				for(j=0;j<4;j++)	if(a[i][4]==0){a[i][4]=a[i][3];a[i][3]=a[i][2];a[i][2]=a[i][1];a[i][1]=0;}
				for(j=0;j<4;j++)	if(a[i][3]==0){a[i][3]=a[i][2];a[i][2]=a[i][1];a[i][1]=0;}
				for(j=0;j<4;j++)	if(a[i][2]==0){a[i][2]=a[i][1];a[i][1]=0;}	
				if(a[i][4]==a[i][3]){
					if(a[i][4]!=0) {
						a[i][4]*=2;a[i][3]=0;
						if(a[i][2]==a[i][1]){
							if(a[i][2]!=0) a[i][3]=a[i][2]*2;a[i][2]=a[i][1]=0;
						}
						else {a[i][3]=a[i][2];a[i][2]=a[i][1];a[i][1]=0;}	
					}
				}
				else{
					if(a[i][3]!=0){
						if(a[i][3]==a[i][2]){
							a[i][3]*=2;a[i][2]=a[i][1];a[i][1]=0;
						} 
						else{
							if(a[i][2]==a[i][1]){
								if(a[i][2]!=0) {a[i][2]*=2;a[i][1]=0;}
							}
						}	
					}
				}
			}
		}
		else if(s[0]=='U'){
			for(i=1;i<5;i++){
				for(j=0;j<4;j++)	if(a[1][i]==0){a[1][i]=a[2][i];a[2][i]=a[3][i];a[3][i]=a[4][i];a[4][i]=0;}
				for(j=0;j<4;j++)	if(a[2][i]==0){a[2][i]=a[3][i];a[3][i]=a[4][i];a[4][i]=0;}
				for(j=0;j<4;j++)	if(a[3][i]==0){a[3][i]=a[4][i];a[4][i]=0;}	
				if(a[1][i]==a[2][i]){
					if(a[1][i]!=0) {
						a[1][i]*=2;a[2][i]=0;
						if(a[3][i]==a[4][i]){
							if(a[3][i]!=0) a[2][i]=a[3][i]*2;a[3][i]=a[4][i]=0;
						}
						else {a[2][i]=a[3][i];a[3][i]=a[4][i];a[4][i]=0;}	
					}
				}
				else{
					if(a[2][i]!=0){
						if(a[2][i]==a[3][i]){
							a[2][i]*=2;a[3][i]=a[4][i];a[4][i]=0;
						} 
						else{
							if(a[3][i]==a[4][i]){
								if(a[3][i]!=0) {a[3][i]*=2;a[4][i]=0;}
							}
						}	
					}
				}
			}
		}
		else if(s[0]=='D'){
			for(i=1;i<5;i++){
				for(j=0;j<4;j++)	if(a[4][i]==0){a[4][i]=a[3][i];a[3][i]=a[2][i];a[2][i]=a[1][i];a[1][i]=0;}
				for(j=0;j<4;j++)	if(a[3][i]==0){a[3][i]=a[2][i];a[2][i]=a[1][i];a[1][i]=0;}
				for(j=0;j<4;j++)	if(a[2][i]==0){a[2][i]=a[1][i];a[1][i]=0;}	
				if(a[4][i]==a[3][i]){
					if(a[4][i]!=0) {
						a[4][i]*=2;a[3][i]=0;
						if(a[2][i]==a[1][i]){
							if(a[2][i]!=0) a[3][i]=a[2][i]*2;a[2][i]=a[1][i]=0;
						}
						else {a[3][i]=a[2][i];a[2][i]=a[1][i];a[1][i]=0;}	
					}
				}
				else{
							
					if(a[3][i]!=0){
						if(a[3][i]==a[2][i]){
					
							a[3][i]*=2;a[2][i]=a[1][i];a[1][i]=0;
						} 
						else{
							if(a[2][i]==a[1][i]){
								if(a[2][i]!=0) {a[2][i]*=2;a[1][i]=0;}
							}
						}	
					}
				}
			}
		}
		for(i=1;i<5;i++){
			 for(j=1;j<5;j++){
			 	printf("%d",a[i][j]);
			 	if(j!=4) printf(" ");
			}
			 printf("\n");
		}
		printf("\n");		
	}
	return 0;
}
