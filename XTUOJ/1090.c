#include <stdio.h>

int main(){
    __int64 n,c,i,k,j,sub,pub;
    scanf("%lld",&n);
    int a[50];
    while(n>0){
    if(n%2==0){
    printf("2^%d=1+",n);
    for(i=1;i<=(n/2);i++){
        sub=1;
        pub=1;
        for(j=n;j>n-i;j--){
            sub*=j;
        }
        for(k=1;k<=i;k++){
            pub*=k;
        }
        a[i]=sub/pub;
        printf("%d",sub/pub);
        if(i!=n/2){
            printf("+"); 
        }
        }
        for(c=n/2;c>0;c--){
            printf("%d",a[c]);
            if(c!=0){
                printf("+");
            }
        }
    }
    else
    scanf("%lld",&n);
}

    
    return 0;
}

