# include<stdio.h>
# include<string.h>

int ans(char* s,int t){
    int i,n=strlen(s);
    for(i=0;i<n;i++)if(s[i]!=s[i%t]) return 0;
    if(n%t==0) return 1;   //一定要验证一下在验证一下n能否整除t！！！
    else return 0;
}

int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        char s[111];
        scanf("%s",s);
        int i,f=0;
        for(i=1;i<=80;i++) {if(ans(s,i)){f=1;break;}}
        if(f) printf("%d\n",i);
        else printf("%d\n",strlen(s));
        if(T) printf("\n");
    }
    return 0;
}
