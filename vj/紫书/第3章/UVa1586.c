# include<stdio.h>
# include<string.h>
# include<ctype.h>

int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        char s[111];
        scanf("%s",s);
        int n=strlen(s),i,a;
        s[n]=s[n+1]='A';
        double m=0.0;
        for(i=0;i<n;i++){
            if(s[i]=='C'){
                    if(isdigit(s[i+1])) {
                        if(isdigit(s[i+2])){a=(s[i+1]-'0')*10+(s[i+2]-'0');}
                        else a=s[i+1]-'0';
                    }
                    else a=1;
                m+=(a*12.01);
            }
            else if(s[i]=='H'){
                    if(isdigit(s[i+1])) {
                        if(isdigit(s[i+2])){a=(s[i+1]-'0')*10+(s[i+2]-'0');}
                        else a=s[i+1]-'0';
                    }
                    else a=1;
                m+=(a*1.008);
            }
            else if(s[i]=='O'){
                    if(isdigit(s[i+1])) {
                        if(isdigit(s[i+2])){a=(s[i+1]-'0')*10+(s[i+2]-'0');}
                        else a=s[i+1]-'0';
                    }
                    else a=1;
                m+=(a*16.00);
            }
            else if(s[i]=='N'){
                    if(isdigit(s[i+1])) {
                        if(isdigit(s[i+2])){a=(s[i+1]-'0')*10+(s[i+2]-'0');}
                        else a=s[i+1]-'0';
                    }
                    else a=1;
                m+=(a*14.01);
            }
        }
    printf("%.3lf\n",m);    
    }
    return 0;
}