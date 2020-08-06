# include<stdio.h> 
# include<string.h>
# include<math.h>
 
void swp(int *a,int *b){
	int t;t=*a;*a=*b;*b=t;
}

int fen (int n){  //求分的函数 
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
    while(scanf("%d%s%d",&a,s,&b)!=EOF){ //读取数据，算出各个ID的积分 
        for(flag=0,i=0;i<=cnt;i++){
            if(strcmp(s,ID[i])==0) {score[i]+=fen(b);flag++;break;} 
        }
        if(flag==0) {strcpy(ID[cnt++],s);score[cnt-1]+=fen(b);}    
        }
		max=0;
		for(i=1;i<=cnt+2;i++) if(score[i]>max) max=score[i];  //求最大值，以计算最后成绩 
		for(i=1;i<=cnt+1;i++) score[i]=round(100+10*(log(score[i])-log(max))); //计算最后成绩 
		for(i=1;i<cnt;i++)    ///排序（拿冒泡写的） 
			for(j=1;j<cnt-i;j++){    //冒泡写好!!! 
				if(score[j]<score[j+1]){
					swp(&score[j],&score[j+1]);  //交换成绩 
					strcpy(s,ID[j]); strcpy(ID[j],ID[j+1]);strcpy(ID[j+1],s); //交换ID 
				} 
			}
		for(i=1;i<cnt;i++)   //给成绩相同的ID排序 
			for(j=1;j<cnt-i;j++){
				if(score[j]==score[j+1])
					if(strcmp(ID[j],ID[j+1])>0){strcpy(s,ID[j]);strcpy(ID[j],ID[j+1]);strcpy(ID[j+1],s);} //交换ID 
			}
   	for(i=1;i<cnt;i++) printf("%s %d\n",ID[i],score[i]); //输出 
	return 0;
}
