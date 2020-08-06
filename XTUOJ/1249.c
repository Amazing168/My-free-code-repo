# include<stdio.h>
                
int su(__int64 a){
    if(a%6 !=1&&a%6!=5) return 0;
    int i;
    for(i=5;i*i<=a;i++) if(a%i==0||a%(i+2)==0) return 0;
    return 1;
}
int main(){
    __int64 i,j,s=1,n=4,zong=5;
    __int64 a[88]={0,2,3,5,7};
    while(zong<83){
        for(i=s;i<n;i++){
            s=a[i]*10;
            for(j=0;j<=9;j++){
                if(su(s+j)) a[zong++]=s+j;
            }
            s=n+1;
            n=zong;
        }
    }
    for(i=1;i<84;i++) printf("%I64d %I64d\n",i,a[i]);    
    
    return 0; 
}
