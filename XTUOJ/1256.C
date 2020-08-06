#include <stdio.h>
#include <string.h>

int main(){
    char a[1029];
    int n,i,j,x,t,u,m;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        x=t=u=0;
        scanf("%s",&a);
        for(j=0;j<strlen(a);j++){
            if(a[j]=='X'){
                x++;
            }
            else if(a[j]=='T'){
                t++;
            }
            else if(a[j]=='U'){
                u++;
            }
            else{
                continue;
            }
        }

            if(x<=t){
                if(x<=u){
                    m=x;
                }
                else {
                    m=u;
                }
        }
        else if(t<=u){
                m=t;
        }
        else {
            m=u;
        }
    printf("%d\n",m);
    }
    return 0;
}
