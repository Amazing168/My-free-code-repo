#include<stdio.h>
#include<math.h>
#include<string.h>
char ID[511][25]={0};
char D[25];
int SCORE[511]={0};
int count(int n)
{
    if(n<=12) return 32;
    else if(n>12&&n<=24) return 16;
    else if(n>24&&n<=48) return 8;
    else if(n>48&&n<=96) return 4;
    else if(n>96&&n<=192) return 2;
    return 1;
}

int main()
{
    int name,a,c,i,I,fen,max,kill,trans,m=0;
    char wwx[500];
    char b[600];
    scanf("%d%s%d",&a,&b,&c);
    name=1;
    if(c<=12){fen=32;}else if(c<=24){fen=16;}else if(c<=48){fen=8;}
    else if(c<=96){fen=4;}else if(c<=192){fen=2;}else{fen=1;}
    strcpy(ID[1],b);SCORE[1]=fen;name++;
    //printf("%d\n\n",SCORE[0]);
    while(scanf("%d%s%d",&a,&b,&c)!=EOF)
        {
            if(c<=12){fen=32;}else if(c<=24){fen=16;}else if(c<=48){fen=8;}
            else if(c<=96){fen=4;}else if(c<=192){fen=2;}else{fen=1;}
            m=fen;
            i=0;
            //printf("%d\n",name);
            for(kill=0,i=0;i<name;i++){if(strcmp(ID[i],b)==0){kill++;break;}}
            if(kill==0){strcpy(D,ID[name]);strcpy(ID[name],b);strcpy(b,D);SCORE[name]=SCORE[name]+fen;name++;}
            else{SCORE[i]+=fen;}

        }
        //printf("name:%d\n",SCORE[0]);
        name=name-2;
        for(max=SCORE[0],i=0;i<=name+1;i++){max=(max>SCORE[i]?max:SCORE[i]);
       // printf("%d\n",max);printf("%d: %d\n",i,SCORE[i]);
        }//MAX¡£

        for(i=0;i<name+2;i++){SCORE[i]=round(100+10*(log(SCORE[i])-log(max)));}//¼ÆËã


        for(i=0;i<name+2;i++)
            {for(I=0;I<name+1-i;I++)if(SCORE[I]<SCORE[I+1])
            {strcpy(D,ID[I]);strcpy(ID[I],ID[I+1]);strcpy(ID[I+1],D);
            trans=SCORE[I];SCORE[I]=SCORE[I+1];SCORE[I+1]=trans;}
            }


       for(i=0;i<name+2;i++)
            {
                for(I=0;I<1+name-i;I++)if(SCORE[I]==SCORE[I+1])
                    {
                      if(strcmp(ID[I],ID[I+1])>0){strcpy(D,ID[I]);strcpy(ID[I],ID[I+1]);strcpy(ID[I+1],D);}
                    }
            }

        for(i=0;i<=name;i++){printf("%s %d\n",ID[i],SCORE[i]);}
}

