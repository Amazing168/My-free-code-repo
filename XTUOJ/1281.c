# include <stdio.h>
# include <string.h> 
int main(){
	char s[222];
	int i,j,k,l,cnt,kg;
    while(gets(s)){
    	l=strlen(s);
    	cnt=0;
    	kg=0;
    	int a[27];
    	a[0]=0;
    	for(i=0;i<26;i++) a[i]=0;
    //	printf("\n");
    //	for(i=0;i<26;i++) printf("%d ",a[i]);
    	for(i=0;i<l;i++){
    		if(s[i]==' ') cnt++;
    		else if(s[i]=='A'||s[i]=='a') a[0]=1; 
    		else if(s[i]=='B'||s[i]=='b') a[1]=1;
    		else if(s[i]=='C'||s[i]=='c') a[2]=1;
    		else if(s[i]=='D'||s[i]=='d') a[3]=1;
    		else if(s[i]=='E'||s[i]=='e') a[4]=1;
    		else if(s[i]=='F'||s[i]=='f') a[5]=1;
    		else if(s[i]=='G'||s[i]=='g') a[6]=1;
    		else if(s[i]=='H'||s[i]=='h') a[7]=1;
    		else if(s[i]=='I'||s[i]=='i') a[8]=1;
    		else if(s[i]=='J'||s[i]=='j') a[9]=1;
    		else if(s[i]=='K'||s[i]=='k') a[10]=1;
    		else if(s[i]=='L'||s[i]=='l') a[11]=1;
    		else if(s[i]=='M'||s[i]=='m') a[12]=1;
    		else if(s[i]=='N'||s[i]=='n') a[13]=1;
    		else if(s[i]=='O'||s[i]=='o') a[14]=1;
    		else if(s[i]=='P'||s[i]=='p') a[15]=1;
    		else if(s[i]=='Q'||s[i]=='q') a[16]=1;
    		else if(s[i]=='R'||s[i]=='r') a[17]=1;
    		else if(s[i]=='S'||s[i]=='s') a[18]=1;
    		else if(s[i]=='T'||s[i]=='t') a[19]=1;
    		else if(s[i]=='U'||s[i]=='u') a[20]=1;
    		else if(s[i]=='V'||s[i]=='v') a[21]=1;
    		else if(s[i]=='W'||s[i]=='w') a[22]=1;
    		else if(s[i]=='X'||s[i]=='x') a[23]=1; 
    		else if(s[i]=='Y'||s[i]=='y') a[24]=1;
    		else if(s[i]=='Z'||s[i]=='z') a[25]=1;
		}
    	for(i=0;i<26;i++) kg+=a[i];
    	//printf("%d %d ",kg,cnt); 
    	if(kg<11&&cnt<10)printf("Yes\n");
    	else printf("No\n");
	}
	return 0;
}
