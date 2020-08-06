#include<stdio.h>

int main(){
	int K,n,m,i,j,k,g,b,c,js,cnt,x,y,shu;
	char T; 
	int a[22][22];
	a[0][0]=0;
	scanf("%d",&K);
	getchar();
	for(i=0;i<K;i++){
		shu=1;
		scanf("%d%d",&n,&m);
		getchar();
		for(j=1;j<=n;j++){
			for(k=1;k<=n;k++){
				a[j][k]=shu;
				shu++;
			}
		}
		for(c=0;c<m;c++){
			scanf("%c%d%d",&T,&x,&y);
			getchar();
			if(T=='L'){	
				for(js=0;js<y;js++){
					for(cnt=0;cnt<n;cnt++){
						a[x][cnt]=a[x][cnt+1];
				//		printf("%d",a[x][cnt]);
					}	
					a[x][n]=a[x][0];
				}
				for(g=1;g<=n;g++){
					for(b=1;b<=n;b++){
						printf("%d",a[g][b]);
					if(g!=n||b!=n){
							printf(" ");
				}
					}	 	
			}	
			printf("\n");
			} 
			if(T=='R'){
				for(js=0;js<y;js++){
					for(cnt=n+1;cnt>0;cnt--){
						a[x][cnt]=a[x][cnt-1];
				//		printf("%d",a[x][cnt]);
					}	
					a[x][1]=a[x][n+1];
				}
				for(g=1;g<=n;g++){
					for(b=1;b<=n;b++){
						printf("%d",a[g][b]);
					if(g!=n||b!=n){
							printf(" ");
				}
					}	 
			}	
			printf("\n");	
			}
			if(T=='U'){
				for(js=0;js<y;js++){
					for(cnt=0;cnt<n;cnt++){
						a[cnt][x]=a[cnt+1][x];
				//		printf("%d",a[x][cnt]);
					}	
					a[n][x]=a[0][x];
				}
				for(g=1;g<=n;g++){
					for(b=1;b<=n;b++){
						printf("%d",a[g][b]);
					if(g!=n||b!=n){
							printf(" ");
				}
					}	 
			}	
			printf("\n");
			}
			if(T=='D'){
				for(js=0;js<y;js++){
					for(cnt=n+1;cnt>0;cnt--){
						a[cnt][x]=a[cnt-1][x];
				//		printf("%d",a[x][cnt]);
					}	
					a[1][x]=a[n+1][x];
				}
				for(g=1;g<=n;g++){
					for(b=1;b<=n;b++){
						printf("%d",a[g][b]);
					if(g!=n||b!=n){
							printf(" ");
				}
					}	 	
			}	
			printf("\n");			
			}
		}	
	}
	return 0;
}
 
