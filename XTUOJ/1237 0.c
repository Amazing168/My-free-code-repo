#include<stdio.h>
#define max 5000000  //不能用int来定义max 
int arr[max];
int p[max];
int main()
{
    int k,a,b,i,j,s,x;
    for(i=2;i*i<=max;i++)
    {
        if(!arr[i])
        {
            for(j=i*i;j<=max;j+=i)  arr[j]=1;
        }
    }
    arr[1]=arr[0]=1;
    j=0;
    p[1]=p[2]=p[3]=p[4]=0;
    for(i=2;i<=max-2;i++)
    {
        if(arr[i]==0&&arr[i+2]==0)
        {
            p[i+2]=p[i+1]+1;     //把从0~n有多少个孪生素数记下来，之后直接做减法即可。 
        }
        else p[i+2]=p[i+1];
    }
    //printf("%d",p[10]);
    scanf("%d",&k);
    while(k--)
    {
        s=0;
        scanf("%d%d",&a,&b);
        /*for(i=a;i<=b-2;i++)   //这样子样例一多，会超时 
        {
            if(arr[i]==0&&arr[i+2]==0)  s++;
        }*/ 
        if(b-a>=2)  s=p[b]-p[a+1];
        printf("%d\n",s);
    }
    return 0;    
}

