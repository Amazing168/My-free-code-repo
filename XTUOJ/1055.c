#include <stdio.h>
#include <string.h>

int main()
{
    char a[555];
    int i,j,cnt,n,t;

    scanf("%s",&a);
    while (a[0]!='0')
    {
        cnt=0;
        for(j=0; j<strlen(a); j++)
        {
            cnt+=a[j]-'0';
        }
        while(cnt>9)
        {
            t=cnt;
            n=0;
            while(t>0)
            {
                n+=t%10;
                t/=10;
            }
            cnt=n;
        }
        printf("%d\n",cnt);
        scanf("%s",&a);

    }



    return 0;
}
