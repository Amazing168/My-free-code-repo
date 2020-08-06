#include <stdio.h>

int main(){
    int a,b,c,d;
    int flag;
    scanf("%d %d %d",&a,&b,&c);
    while (a!=0&&b!=0&&c!=0){
        flag=0;
        for(;c>=0;c-=a){
            d=c%b;
            if(d==0){
                flag=1;
                break;
            }
            if(c==0){
                flag=1;
                break;
            }
        }
        if(flag){
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }
return 0;
}
