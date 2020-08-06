# include <stdio.h>
# include <string.h>
# define max 100000000
int a[max];

int main()
{
    int K,i,j,b,k,l,flag;
    a[1]=1;
    for(i=2; i*i<max; i++)
    {
        if(!a[i]) for(j=i*i; j<max; j+=i) a[j]=1;
    }

    char s[11];
    scanf("%d",&K);
    while(K--)
    {
        flag=1;
        j=0;
        scanf("%s",s);
        l=strlen(s);
       // printf("%d ",l);
        if(l)
        {
            b=s[0]-'0';
            if(a[b]) flag=0;
        }
        if(flag)
        {

            for(i=0; i<l; l++)
            {
                if(s[i]=='0') flag=0;
                break ;
            }
            for(b=1; b<l; b++)
            {
                for(i=b; i<l; i++)
                {
                    k=a[i]-'0';
                    j+=k;
                    if(i!=(l-1)) j*=10;
                }
                if(a[j])
                {
                    flag=0;
                    break;
                }
              
            }
        }
        if(flag) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}

