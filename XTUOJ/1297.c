# include<stdio.h> 
# include<string.h>
# include<math.h>
 
void swp(int *a,int *b){
	int t;t=*a;*a=*b;*b=t;
}

int fen (int n){  //��ֵĺ��� 
	if(n<=12) return 32;
	else if(n<=24) return 16;
	else if(n<=48) return 8;
	else if(n<=96) return 4;
	else if(n<=192) return 2;
	else  return 1; 
} 
	char ID[555][25]={0},s[555],t[25]; 
	int  a,b,max,i,flag,cnt,n,j,k,score[555]={0};
int main(){
	cnt=1;
    while(scanf("%d%s%d",&a,s,&b)!=EOF){ //��ȡ���ݣ��������ID�Ļ��� 
        for(flag=0,i=0;i<=cnt;i++){
            if(strcmp(s,ID[i])==0) {score[i]+=fen(b);flag++;break;} 
        }
        if(flag==0) {strcpy(ID[cnt++],s);score[cnt-1]+=fen(b);}    
        }
		max=0;
		for(i=1;i<=cnt+2;i++) if(score[i]>max) max=score[i];  //�����ֵ���Լ������ɼ� 
		for(i=1;i<=cnt+1;i++) score[i]=round(100+10*(log(score[i])-log(max))); //�������ɼ� 
		for(i=1;i<cnt;i++)    ///������ð��д�ģ� 
			for(j=1;j<cnt-i;j++){    //ð��д��!!! 
				if(score[j]<score[j+1]){
					swp(&score[j],&score[j+1]);  //�����ɼ� 
					strcpy(s,ID[j]); strcpy(ID[j],ID[j+1]);strcpy(ID[j+1],s); //����ID 
				} 
			}
		for(i=1;i<cnt;i++)   //���ɼ���ͬ��ID���� 
			for(j=1;j<cnt-i;j++){
				if(score[j]==score[j+1])
					if(strcmp(ID[j],ID[j+1])>0){strcpy(s,ID[j]);strcpy(ID[j],ID[j+1]);strcpy(ID[j+1],s);} //����ID 
			}
   	for(i=1;i<cnt;i++) printf("%s %d\n",ID[i],score[i]); //��� 
	return 0;
}
