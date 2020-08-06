#include<stdio.h>

 int i,n,I,x,y,K,S=0;
    struct TT{char A[9];char B[30];}sr,out;
    struct SRS{struct TT sr;int th;char R[20];}SR;
    struct TT OUT[20];
    int X[20]={0};
    char c;
int main()
{
   
    scanf("%d",&x);
    while(scanf("%s%s%d%s",&SR.sr.A,&SR.sr.B,&SR.th,&SR.R)!=EOF)
        {
            n=SR.th-1001;K=0;S=0;
            if(SR.R[0]=='A')
                {
                    if(X[n]==0){OUT[n]=SR.sr;}
                    else
                        {
                            for(i=0;i<=7;i++)
                                {
                                    if(OUT[n].A[i]==SR.sr.A[i]){}
                                    else{
                                            if(OUT[n].A[i]>SR.sr.A[i]){K++;break;}
                                            else{S++;break;}
                                        }
                                }
                                if(K!=0){OUT[n]=SR.sr;}
                        }
                    X[n]++;
                }
             while((c = getchar()) != '\n');      
        }
        for(i=1001;i<1001+x;i++)
            {
                if(X[i-1001]!=0){printf("%d ",i);printf("%s %s ",OUT[i-1001].A,OUT[i-1001].B);printf("\n");}
                else{printf("%d\n",i);}
            }
}
