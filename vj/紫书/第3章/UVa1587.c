# include <stdio.h>
# include <string.h>

int i,a[11111],b[9],c[9];//a表示该长度的种类，b表示该种类的长度出现了几次，c表示该种类的长度出现在了几个矩形中
int main(){
    while(1){
        memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
        int num=0,flag=0,n,m;
        for(i=0;i<6;i++){
            if(scanf("%d%d",&n,&m)!=2) return 0;
            if(a[n]==0) a[n]=++num;
            if(a[m]==0) a[m]=++num;
            b[a[n]]++;
            b[a[m]]++;
            c[a[n]]++;
            if(n!=m) c[a[m]]++;
        }
       // printf("%d\n",num);
        if(num==1) flag=1;
        else if(num==2) {if((b[1]==4&&c[1]==4)||(b[2]==4&&c[2]==4)) flag=1;}
        else if(num==3) {if(b[1]==4&&c[1]==4&&b[2]==4&&c[2]==4&&b[3]==4&&c[3]==4) flag=1;}
        if(flag) printf("POSSIBLE\n");
        else printf("IMPOSSIBLE\n");


    }
    return 0;
}