						
#include<stdio.h>
int main()
{
    int N,K,S,a,b,c,i,x,y,I,kill,save=0;
    int M[19]={0};int t[19]={0};int D[9]={0};
    int T[19]={0};int W[19]={0};int F[19]={0};
    char R[10];
    scanf("%d",&N);
    while(N--)
    {
        scanf("%d %d",&K,&S);
        for(i=1;i<=7;i++){W[i]=0;M[i]=0;T[i]=0;t[i]=0;F[i]=0;}
        for(i=1;i<=8;i++){D[i]=0;}
        for(I=1;I<=K;I++)
        {
            scanf("%s%d%d",&R,&x,&y);
            if(R[0]=='M'){for(i=x;i<=y;i++){M[i]=1;}}
            else if(R[0]=='T'&&R[1]=='u'){for(i=x;i<=y;i++){T[i]=1;}}
            else if(R[0]=='W'){for(i=x;i<=y;i++){W[i]=1;}}
            else if(R[0]=='T'&&R[1]=='h'){for(i=x;i<=y;i++){t[i]=1;}}
            else if(R[0]=='F'){for(i=x;i<=y;i++){F[i]=1;}}
            else{}
        }//ж╠?ивив 
        
    //    for(i=1;i<=11;i++){printf("%d\n",W[i]);}
        
        a=0;
        for(i=1;i<=5-S;i++)
        {save=0;for(I=i;I<=i+S-1;I++){if(M[I]!=0){save++;break;}}if(save==0){M[i]=7;a++;}}
        for(i=5;i<=9-S;i++)
        {save=0;for(I=i;I<=i+S-1;I++){if(M[I]!=0){save++;break;}}if(save==0){M[i]=7;a++;}}
        for(i=9;i<=12-S;i++)
        {save=0;for(I=i;I<=i+S-1;I++){if(M[I]!=0){save++;break;}}if(save==0){M[i]=7;a++;}}
        for(i=1;i<=5-S;i++)
        {save=0;for(I=i;I<=i+S-1;I++){if(T[I]!=0){save++;break;}}if(save==0){T[i]=7;a++;}}
        for(i=5;i<=9-S;i++)
        {save=0;for(I=i;I<=i+S-1;I++){if(T[I]!=0){save++;break;}}if(save==0){T[i]=7;a++;}}
        for(i=9;i<=12-S;i++)
        {save=0;for(I=i;I<=i+S-1;I++){if(T[I]!=0){save++;break;}}if(save==0){T[i]=7;a++;}}
        for(i=1;i<=5-S;i++)
        {save=0;for(I=i;I<=i+S-1;I++){if(W[I]!=0){save++;break;}}if(save==0){W[i]=7;a++;}}
        for(i=5;i<=9-S;i++)
        {save=0;for(I=i;I<=i+S-1;I++){if(W[I]!=0){save++;break;}}if(save==0){W[i]=7;a++;}}
        for(i=9;i<=12-S;i++)
        {save=0;for(I=i;I<=i+S-1;I++){if(W[I]!=0){save++;break;}}if(save==0){W[i]=7;a++;}}
        for(i=1;i<=5-S;i++)
        {save=0;for(I=i;I<=i+S-1;I++){if(t[I]!=0){save++;break;}}if(save==0){t[i]=7;a++;}}
        for(i=5;i<=9-S;i++)
        {save=0;for(I=i;I<=i+S-1;I++){if(t[I]!=0){save++;break;}}if(save==0){t[i]=7;a++;}}
        for(i=9;i<=12-S;i++)
        {save=0;for(I=i;I<=i+S-1;I++){if(t[I]!=0){save++;break;}}if(save==0){t[i]=7;a++;}}
        for(i=1;i<=5-S;i++)
        {save=0;for(I=i;I<=i+S-1;I++){if(F[I]!=0){save++;break;}}if(save==0){F[i]=7;a++;}}
        for(i=5;i<=9-S;i++)
        {save=0;for(I=i;I<=i+S-1;I++){if(F[I]!=0){save++;break;}}if(save==0){F[i]=7;a++;}}
        for(i=9;i<=12-S;i++)
        {save=0;for(I=i;I<=i+S-1;I++){if(F[I]!=0){save++;break;}}if(save==0){F[i]=7;a++;}}
        printf("%d\n",a);
    
            for(kill=0;kill<=17;kill++)if(M[kill]==7)
            {printf("Mon ");printf("%d %d\n",kill,kill+S-1);}
            for(kill=0;kill<=17;kill++)if(T[kill]==7)
            {printf("Tue ");printf("%d %d\n",kill,kill+S-1);}
            for(kill=0;kill<=17;kill++)if(W[kill]==7)
            {printf("Wen ");printf("%d %d\n",kill,kill+S-1);}
            for(kill=0;kill<=17;kill++)if(t[kill]==7)
            {printf("Thur ");printf("%d %d\n",kill,kill+S-1);}
            for(kill=0;kill<=17;kill++)if(F[kill]==7)
            {printf("Fri ");printf("%d %d\n",kill,kill+S-1);}
        
        for(i=1;i<=15;i++){W[i]=0;M[i]=0;T[i]=0;t[i]=0;F[i]=0;}
        for(i=1;i<=8;i++){D[i]=0;}
    }
}
