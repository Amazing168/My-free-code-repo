# include <stdio.h>
# include <string.h>

int th,n,i,flag[18];
char zztime[18][11],zzteam[18][11],time[11],team[11],jg[22],c;
int main(){
	scanf("%d\n",&n);
	while(scanf("%s %s %d %s",&time,&team,&th,&jg)!=EOF){
	//	getchar();

		th-=1000;
		if(jg[0]=='A'){
			if(flag[th]==0||strcmp(time,zztime[th])<0){
				flag[th]=1;
				strcpy(zztime[th],time);
				strcpy(zzteam[th],team);
		//		printf("%d %s %s\n",th+1000,zztime[th],zzteam[th	]);
			}
		}
	    while((c = getchar()) != '\n');
	}
//		printf("==\n");
	for(i=1;i<=n;i++){
		if(flag[i]) 
			printf("%d %s %s\n",i+1000,zztime[i],zzteam[i]);
		else printf("%d\n",i+1000); 
	}
	return 0;
} 
