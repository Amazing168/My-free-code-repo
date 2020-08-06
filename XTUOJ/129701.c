
# include<stdio.h> 
# include<string.h>
# include<math.h>
 
void swp(int *a,int *b){
    int t;t=*a;*a=*b;*b=t;
}

int fen (int n){
    if(n<=12) return 32;
    else if(n<=24) return 16;
    else if(n<=48) return 8;
    else if(n<=96) return 4;
    else if(n<=192) return 2;
    else  return 1; 
} 
int main(){
    char ID[55][25],s[25],t[25]; 
    int  a,b,max,i,cnt,n,j,flag,k,score[55]={0};
    cnt=1;
  while(scanf("%d%s%d",&a,s,&b)!=EOF){
        for(flag=0,i=0;i<=cnt;i++){
            if(strcmp(s,ID[i])==0) {score[i]+=fen(b);flag++;break;} 
        }
        if(flag==0) {strcpy(ID[cnt++],s);score[cnt-1]+=fen(b);}    
        }
        max=score[1];
        for(i=1;i<cnt;i++) if(score[i]>max) max=score[i];
        for(i=1;i<cnt;i++) score[i]=round(100+10*(log(score[i])-log(max)));
        for(i=1;i<cnt;i++) 
            for(j=1;j<cnt-1;j++){
                if(score[j]<score[j+1]){
                    swp(&score[j],&score[j+1]);
                    strcpy(s,ID[j]); strcpy(ID[j],ID[j+1]);strcpy(ID[j+1],s);
                } 
            }
        for(i=1;i<cnt;i++) 
            for(j=1;j<cnt-1;j++){
                if(score[j]==score[j+1])
                    if(strcmp(ID[j],ID[j+1])>0){strcpy(s,ID[j]);strcpy(ID[j],ID[j+1]);strcpy(ID[j+1],s);} 
            }
        for(i=1;i<cnt;i++) printf("%s %d\n",ID[i],score[i]);
    return 0;
}
