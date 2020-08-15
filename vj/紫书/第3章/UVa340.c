# include <stdio.h>

int n,a[1111],b[1111];
int main(){
    int kase=0;
    while(scanf("%d",&n)&&n){
        printf("Game %d:\n",++kase);
        int i,j;
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        for(;;){
            int A=0,B=0;
            for(i=0;i<n;i++) {scanf("%d",&b[i]);if(a[i]==b[i]) A++;}
            if(b[0]==0) break;
            for(i=1;i<=9;i++){
                int c1=0,c2=0;
                for(j=0;j<n;j++){
                    if(a[j]==i) c1++;
                    if(b[j]==i) c2++;
                }
                if(c1<c2)B+=c1;else B+=c2;
            }
            printf("    (%d,%d)\n",A,B-A);
        }
    }
    return 0;
}