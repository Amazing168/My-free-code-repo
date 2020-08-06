#include <stdio.h>

int  main()
{
    int n,i,j,mid,a,b,m;
    char c;
    scanf("%d",&n);
    for(m=0; m<n; m++)
    {
        scanf("%d %c",&a,&c);
        int num[a];
        for(i=0; i<a; i++)
        {
            scanf("%d",&num[i]);
        }
        if(c=='D')
        {
            for(i=0; i<a-1; i++)
            {
                for(j=i+1; j<a; j++)
                {
                    if(num[i]<num[j])
                    {
                        mid=num[i];
                        num[i]=num[j];
                        num[j]=mid;
                    }
                }
            }

        }
        else
        {
            for(i=0; i<a-1; i++)
            {
                for(j=i+1; j<a; j++)
                {
                    if(num[i]>num[j])
                    {
                        mid=num[i];
                        num[i]=num[j];
                        num[j]=mid;
                    }
                }
            }

        }
        for(i=0; i<a; i++)
        {
            printf("%d",num[i]);
            if(i!=a-1)
            {
                printf(" ");
            }
            else
            {
                printf("\n");
            }
        }

    }

    return 0;
}
