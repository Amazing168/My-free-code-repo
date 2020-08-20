# include<stdio.h>
# include<string.h>
# include<math.h>

int main(){
    double A[11][33];
    int B[11][33];
    int i,j,k;
    for(i=0;i<=9;i++){
        for(j=1;j<=30;j++){
            double m=1-pow(2,-1-i);
            int e=pow(2,j)-1;
            double t=log10(m)+e*log10(2);
            B[i][j]=t;
            A[i][j]=pow(10,t-B[i][j]);
        }
    }
    char str[22];
    while(scanf("%s",str)){
        if(str[1]=='e') break;
        str[17]=' ';
        double a;int b;
        sscanf(str,"%lf %d",&a,&b);
        int flag=0;
        for(i=0;i<=9;i++){
            for(j=1;j<=30;j++){
                if(b==B[i][j]&&fabs(a-A[i][j]<1e-4)){printf("%d %d\n",i,j);flag=1;}
                if(flag) break;
            }
        }
    }
    return 0;
}