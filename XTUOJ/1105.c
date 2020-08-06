# include <stdio.h>

int he(int a,int b,int c,int d)
{
    int h;
    h=a*d+c*b;
    return h;
}
int cha(int a, int b, int c, int d)
{
    int p;
    p=a*d-c*b;
    return p;
}
int gcd(int a,int b){
    int r,t;
    if (a<b){
        r=a;
        a=b;
        b=r;
    }
    while(b){
        t=a%b;
        a=b;
        b=t;
    }
    return a;

}

int main()
{
    int n,i,a,b,c,d,e,f,t,hs,r,hx,cs,gc,gd;
    scanf("%d",&n);
    for(i=0;i<n; i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        hs= he(a,b,c,d);
        hx=b*d;
        if(hs%hx==0)
        {
            printf("%d ",hs/hx);
        }
        else
        {
                gc= gcd(hs,hx);
                printf("%d/%d ",hs/gc,hx/gc);

        }
            cs= cha(a,b,c,d);

            if(cs%hx==0)
            {
                printf("%d\n",cs/hx);
            }
            else
            {   gd= gcd(cs,hx);
                if(gd<0){
                    r=-gd;
                    gd=r;
                }
                if(cs==0){
                    printf("0");
                }
                else if(cs<0){
                    printf("%d/%d\n",cs/gd,hx/gd);
                }
                   else  printf("%d/%d\n",cs/gd,hx/gd);

                }

                }
             return 0;
        }


