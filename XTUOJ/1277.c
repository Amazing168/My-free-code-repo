#include <stdio.h>

int main(){
    int i,j,k,l,m,n;
    char c;
    while(scanf("%c",&c)!=EOF){
        getchar();
        n=c-'A'+1;
        for(i=0;i<2*n;i++){
            for(j=2*n-1-i;j>0;j--) printf(" "); 
            for(k=0;k<i+1&&i<n;k++) printf("%c",'A'+k);
            for(k=i;k>0&&i<n;k--) printf("%c",'A'+k-1);
            for(k=0;k<i-n+1&&i>=n;k++) printf("%c",'A'+k);
            for(k=i-n;k>0&&i>=n;k--) printf("%c",'A'+k-1);
            for(j=2*n-1-(i-n)*2;j>0&&i>=n;j--) printf(" "); 
            for(k=0;k<i-n+1&&i>=n;k++) printf("%c",'A'+k);
            for(k=i-n;k>0&&i>=n;k--) printf("%c",'A'+k-1);
            printf("\n");
        }
    }
    return 0;
}
