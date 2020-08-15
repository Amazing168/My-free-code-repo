# include <stdio.h>

char s[55][1111],res[1111];
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int m,n,i,j,ans=0;
        scanf("%d%d",&m,&n);
        for(i=0;i<m;i++) {scanf("%s",s[i]);}  //读取
        for(i=0;i<n;i++){
            int num[6]={0};
            int flag=1;
            char max='A';
            for(j=0;j<m;j++){   //计算每一列出现最多的字母
                if(s[j][i]=='A') num[1]++;
                else if(s[j][i]=='C') num[2]++;
                else if(s[j][i]=='G') num[3]++;
                else if(s[j][i]=='T') num[4]++;
            }
            if(num[2]>num[1]) {flag=2;max='C';num[1]=num[2];} //更新max，flag
            if(num[3]>num[1]) {flag=3;max='G';num[1]=num[3];}
            if(num[4]>num[1]) {flag=4;max='T';}
            res[i]=max;ans+=(m-num[flag]);          //存答案
    //        printf("%d %c\n",i,max);      
        }
        for(i=0;i<n;i++) printf("%c",res[i]);//输出
        printf("\n%d\n",ans);
    }
    return 0;
}

