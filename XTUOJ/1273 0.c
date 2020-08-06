#include<stdio.h>
int main()
{
    int z,n,i,b,c,t;
    scanf("%d",&z);
    while(z--)
    {
        int ch[7];
        scanf("%d",&n);
        scanf("%d",&ch[0]);
        i=0,n--;
        while(n--)
        {
            scanf("%d",&b);//判断有几个不同的数。输入一个数字，比较一下。 
            if(i<4)
            {
                for(c=0;c<=i;c++)//和数组现有的不同的数字进行比较。 
                {
                    if(ch[c]==b)
                    {
                        break;
                    }
                }
                if(c>i)//和数组里的数都不同，可以存入数组。 
                {
                    i++;
                    ch[i]=b;
                }
            }
        }
        if(i<3)
        printf("Yes\n");
        else if(i==3)
        {
          for(int b=0;b<3;b++)//排升序。方便下面的分组计算。
          {
            for(c=b+1;c<=3;c++)
            {
              if(ch[b]>ch[c])
              {
                t=ch[b];
                ch[b]=ch[c];
                ch[c]=t;
              }
            }
          }
          if((ch[0]+ch[2]==ch[1]+ch[3])||ch[0]+ch[3]==ch[1]+ch[2])//两两分组计算判断和是否相同
          printf("Yes\n");
          else
          printf("No\n");
        }
        else
        printf("No\n");
    }
    return 0;
}
