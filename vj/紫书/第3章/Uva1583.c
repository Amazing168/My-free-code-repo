# include <stdio.h>

# define max 100005
int ans[max];
int main(){
    for(int i=1;i<max;i++){
        int x=i,y=i;
        while(x>0){y+=(x%10);x/=10;}
        if(ans[y]==0||i<ans[y])ans[y]=i;
    }
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        printf("%d\n",ans[n]);
    }
    return 0;
}