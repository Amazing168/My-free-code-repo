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
            scanf("%d",&b);//�ж��м�����ͬ����������һ�����֣��Ƚ�һ�¡� 
            if(i<4)
            {
                for(c=0;c<=i;c++)//���������еĲ�ͬ�����ֽ��бȽϡ� 
                {
                    if(ch[c]==b)
                    {
                        break;
                    }
                }
                if(c>i)//���������������ͬ�����Դ������顣 
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
          for(int b=0;b<3;b++)//�����򡣷�������ķ�����㡣
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
          if((ch[0]+ch[2]==ch[1]+ch[3])||ch[0]+ch[3]==ch[1]+ch[2])//������������жϺ��Ƿ���ͬ
          printf("Yes\n");
          else
          printf("No\n");
        }
        else
        printf("No\n");
    }
    return 0;
}
