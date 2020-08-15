# include<stdio.h>
# include<string.h>

char s[111];

int less(char* s,int a,int b){ //验证以a为起点的字典序是否小于以b为起点的！！！
    int n=strlen(s);
    for(int i=0;i<n;i++){
        if(s[(a+i)%n]!=s[(b+i)%n]) return s[(a+i)%n]<s[(b+i)%n];
    }
    return 0;
}
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        scanf("%s",s);
        int ans=0,n=strlen(s);
        for(int i=1;i<n;i++)
            if(less(s,i,ans)) ans=i; //若以i为起点的字典序小更新ans！
        for(int i=0;i<n;i++) putchar(s[(ans+i)%n]);
        printf("\n");
    }
    return 0;
}