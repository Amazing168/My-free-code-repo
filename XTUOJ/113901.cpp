#include<stdio.h>
int prime(int n)
{
    int i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0 )  return 0;
    }
    return 1;
} 
int main()
{
    int k,p,q,i,j,s=0,n;
    scanf("%d",&k);
    while(k--)
    {
        scanf("%d",&n);
        for(i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                if(prime(i)&&prime(n/i)&&i!=(n/i)) {
                printf("Yes\n"); break;}
                else {printf("No\n"); break;}
            }
        }
        if(i*i>n) printf("No\n");    
    } 
    return 0;
}